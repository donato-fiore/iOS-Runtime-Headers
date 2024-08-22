// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEPODALARMITEMMANAGER_H
#define HFHOMEPODALARMITEMMANAGER_H

@protocol HFMediaProfileContainer;


#import "HFItemManager.h"
#import "HFHomePodAlarmItemModule.h"

@interface HFHomePodAlarmItemManager : HFItemManager

@property (readonly, nonatomic) HFHomePodAlarmItemModule *alarmItemModule; // ivar: _alarmItemModule
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 mediaProfileContainer:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif