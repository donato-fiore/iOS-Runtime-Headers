// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLVIEWCONTROLLERCOORDINATOR_H
#define HUQUICKCONTROLVIEWCONTROLLERCOORDINATOR_H

@class NSSet, NSString, HMHome, HFItem<NSCopying>, HFSimpleItemManager, HFItem, HFOverrideCharacteristicValueSource;
@protocol HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate, HUQuickControlContentHosting, HUQuickControlViewControllerCoordinatorDelegate, HFIconDescriptor;

#import <Foundation/Foundation.h>

#import "HUQuickControlViewController.h"
#import "HUQuickControlContentCharacteristicWritingUpdateAdapter.h"

@interface HUQuickControlViewControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate>



@property (retain, nonatomic) HUQuickControlViewController *activeController; // ivar: _activeController
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter; // ivar: _characteristicWritingAdapter
@property (weak, nonatomic) NSObject<HUQuickControlContentHosting> *controlHost; // ivar: _controlHost
@property (readonly, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (nonatomic, getter=areControlsVisible) BOOL controlsVisible; // ivar: _controlsVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlViewControllerCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (readonly, nonatomic) HFItem<NSCopying> *item; // ivar: _item
@property (readonly, nonatomic) HFSimpleItemManager *itemManager; // ivar: _itemManager
@property (copy, nonatomic) NSString *primaryStatusText; // ivar: _primaryStatusText
@property (readonly, nonatomic) HFItem *reachabilityItem; // ivar: _reachabilityItem
@property (readonly, nonatomic) HFSimpleItemManager *reachabilityItemManager; // ivar: _reachabilityItemManager
@property (readonly, nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (copy, nonatomic) NSString *secondaryStatusText; // ivar: _secondaryStatusText
@property (nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle; // ivar: _shouldIncludeRoomNameInHeaderTitle
@property (readonly, nonatomic) BOOL showIconOffState; // ivar: _showIconOffState
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFOverrideCharacteristicValueSource *valueSource; // ivar: _valueSource


-(BOOL)valueSource:(id)arg0 shouldOverrideValueForCharacteristic:(id)arg1 ;
-(id)_controllerForControllableCharacteristic:(id)arg0 ;
-(id)_primaryStatusTextForLatestResults:(id)arg0 showingSecondaryStatus:(BOOL)arg1 ;
-(id)_secondaryStatusTextForLatestResults:(id)arg0 ;
-(id)initWithItem:(id)arg0 controlItems:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(id)valueSource:(id)arg0 overrideValueForCharacteristic:(id)arg1 ;
-(void)_createControlViewControllersForControlItems:(id)arg0 ;
-(void)_updateIconDescriptorNotifyingDelegate:(BOOL)arg0 ;
-(void)_updateReachabilityStateNotifiyingDelegate:(BOOL)arg0 ;
-(void)_updateStatusTextNotifyingDelegate:(BOOL)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)quickControlViewControllerDidUpdateStatusOverrides:(id)arg0 ;


@end


#endif