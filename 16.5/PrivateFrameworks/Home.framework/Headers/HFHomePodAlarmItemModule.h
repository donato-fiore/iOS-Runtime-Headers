// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMEPODALARMITEMMODULE_H
#define HFHOMEPODALARMITEMMODULE_H

@class NSString, NSSet;
@protocol HFAccessorySettingMobileTimerAdapterObserver, HFMediaProfileContainer;


#import "HFItemModule.h"

@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly) Class superclass;


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 mediaProfileContainer:(id)arg1 ;
-(id)mobileTimerAdapterForAlarmItem:(id)arg0 ;
-(id)mobileTimerAdapterForMediaProfile:(id)arg0 ;
-(void)mobileTimerAdapter:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;


@end


#endif