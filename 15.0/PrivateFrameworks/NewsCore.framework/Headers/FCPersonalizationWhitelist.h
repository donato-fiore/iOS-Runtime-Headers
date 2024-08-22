// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPERSONALIZATIONWHITELIST_H
#define FCPERSONALIZATIONWHITELIST_H

@class NTPBPersonalizationWhitelist, NSDictionary, NSSet;
@protocol NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>

 {
    NTPBPersonalizationWhitelist *_pbWhitelist;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDictionary *defaultTags;
@property (readonly, nonatomic) NSDictionary *optionalTags;
@property (retain, nonatomic) NSSet *portraitDisabledTagIDs; // ivar: _portraitDisabledTagIDs
@property (retain, nonatomic) NSDictionary *whitelist; // ivar: _whitelist


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPBPersonalizationWhitelist:(id)arg0 ;
-(id)jsonEncodableObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif