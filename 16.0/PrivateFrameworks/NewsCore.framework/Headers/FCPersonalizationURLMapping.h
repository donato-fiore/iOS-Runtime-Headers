// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONURLMAPPING_H
#define FCPERSONALIZATIONURLMAPPING_H

@class NTPBURLMapping, NSDictionary;
@protocol NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationURLMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>

 {
    NTPBURLMapping *_pbURLMapping;
}


@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSDictionary *urlMappingByDomain; // ivar: _urlMappingByDomain


+(BOOL)supportsSecureCoding;
+(id)domainForURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPBURLMapping:(id)arg0 ;
-(id)jsonEncodableObject;
-(id)popularityForURL:(id)arg0 ;
-(id)tagScoresForURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif