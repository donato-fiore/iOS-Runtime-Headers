// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXONBOARDINGSTACKWIDGETCACHE_H
#define ATXONBOARDINGSTACKWIDGETCACHE_H

@class NSDate, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXOnboardingStackWidgetCache : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *cacheUpdateDate; // ivar: _cacheUpdateDate
@property (readonly, nonatomic) NSDictionary *descriptorToAppLaunchData; // ivar: _descriptorToAppLaunchData
@property (readonly, nonatomic) NSNumber *hasiCloudFamily; // ivar: _hasiCloudFamily


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppLaunchDictionary:(id)arg0 ;
-(id)initWithAppLaunchDictionary:(id)arg0 cacheUpdateDate:(id)arg1 hasiCloudFamily:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif