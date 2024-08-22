// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTSATISFACTIONOVERRIDES_H
#define HKFEATUREAVAILABILITYREQUIREMENTSATISFACTIONOVERRIDES_H

@class NSString, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject

@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)initWithFeatureIdentifier:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 featureIdentifier:(id)arg1 ;
-(id)overriddenRequirementIdentifiers;
-(id)overriddenSatisfactionOfRequirementWithIdentifier:(id)arg0 ;
-(void)overrideSatisfactionOfRequirementWithIdentifier:(id)arg0 isSatisfied:(id)arg1 ;
-(void)resetAllRequirementSatisfactionOverrides;


@end


#endif