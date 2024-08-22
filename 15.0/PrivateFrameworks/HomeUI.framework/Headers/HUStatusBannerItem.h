// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSTATUSBANNERITEM_H
#define HUSTATUSBANNERITEM_H

@class HFItem, NSString, HMHome, NSNumber;
@protocol HFHomeKitItemProtocol, NSCopying, HFHomeKitObject;



@interface HUStatusBannerItem : HFItem <HFHomeKitItemProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFetchedUpgradeOffer; // ivar: _hasFetchedUpgradeOffer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (retain, nonatomic) NSString *offerActionTitle; // ivar: _offerActionTitle
@property (retain, nonatomic) NSString *offerMessage; // ivar: _offerMessage
@property (retain, nonatomic) NSString *offerTitle; // ivar: _offerTitle
@property (retain, nonatomic) NSNumber *planLimit; // ivar: _planLimit
@property (readonly) Class superclass;


-(id)_determineRequiredAccessorySetupReminders:(id)arg0 ;
-(id)_determineRequiredLockAccessorySetupReminders:(id)arg0 ;
-(id)_determineRequiredOnboardingReminders:(id)arg0 ;
-(id)_namesOfAccessoriesNeedingNaturalLightingOnboarding;
-(id)_possibleDependentKeyPaths;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;


@end


#endif