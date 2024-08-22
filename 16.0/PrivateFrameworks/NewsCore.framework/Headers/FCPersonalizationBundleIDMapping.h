// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONBUNDLEIDMAPPING_H
#define FCPERSONALIZATIONBUNDLEIDMAPPING_H

@class NTPBBundleIDMapping, NSDictionary;
@protocol NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>

 {
    NTPBBundleIDMapping *_pbBundleIDMapping;
}


@property (retain, nonatomic) NSDictionary *bundleIDMapping; // ivar: _bundleIDMapping
@property (readonly, nonatomic) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)decendingSpecificityBundleIDsForBundleID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPBBundleIDMapping:(id)arg0 ;
-(id)jsonEncodableObject;
-(id)tagScoresForBundleID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif