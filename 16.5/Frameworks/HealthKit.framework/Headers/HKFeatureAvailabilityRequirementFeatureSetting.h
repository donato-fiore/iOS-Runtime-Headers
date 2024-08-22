// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTFEATURESETTING_H
#define HKFEATUREAVAILABILITYREQUIREMENTFEATURESETTING_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementFeatureSetting : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent; // ivar: _isOnWhenSettingIsAbsent
@property (readonly, copy, nonatomic) NSString *settingsOnKey; // ivar: _settingsOnKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 isOnWhenSettingIsAbsent:(BOOL)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 settingsOnKey:(id)arg1 isOnWhenSettingIsAbsent:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif