// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLVIEWCONTROLLER_H
#define HUQUICKCONTROLVIEWCONTROLLER_H

@class UIViewController, NSSet, NSString, HMHome;
@protocol HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlItemHosting, HUPreloadableViewController, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentRequiringHelper, HUQuickControlViewControllerDelegate, HUQuickControlItemUpdating, HULayoutAnchorProviding, HUQuickControlContentHosting;


#import "HUQuickControlSimpleItemUpdater.h"

@interface HUQuickControlViewController : UIViewController <HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlItemHosting, HUPreloadableViewController>



@property (readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property (nonatomic) BOOL areControlItemsRequestingToBeHidden; // ivar: _areControlItemsRequestingToBeHidden
@property (weak, nonatomic) NSObject<HUQuickControlContentCharacteristicWritingDelegate> *characteristicWritingDelegate; // ivar: _characteristicWritingDelegate
@property (retain, nonatomic) NSObject<HUQuickControlContentRequiringHelper> *childVCThatRequiresHelper; // ivar: _childVCThatRequiresHelper
@property (readonly, copy, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (nonatomic) NSUInteger controlOrientation; // ivar: _controlOrientation
@property (nonatomic) NSUInteger controlSize; // ivar: _controlSize
@property (nonatomic, getter=areControlsVisible) BOOL controlsVisible; // ivar: _controlsVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSingleControlView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HUQuickControlSimpleItemUpdater *internalItemUpdater; // ivar: _internalItemUpdater
@property (readonly, weak, nonatomic) NSObject<HUQuickControlItemUpdating> *itemUpdater; // ivar: _itemUpdater
@property (readonly, copy, nonatomic) NSString *overrideSecondaryStatusText;
@property (readonly, copy, nonatomic) NSString *overrideStatusText;
@property (nonatomic) NSUInteger preferredControl; // ivar: _preferredControl
@property (retain, nonatomic) NSObject<HULayoutAnchorProviding> *preferredFrameLayoutGuide; // ivar: _preferredFrameLayoutGuide
@property (readonly, nonatomic) NSUInteger preferredPresentationStyle;
@property (weak, nonatomic) NSObject<HUQuickControlContentHosting> *quickControlHost; // ivar: _quickControlHost
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled


+(id)controlItemPredicate;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg0 ;
-(id)childQuickControlContentViewControllers;
-(id)hu_preloadContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)overrideValueForCharacteristic:(id)arg0 ;
-(id)viewControllerForTouchContinuation;
-(void)_updateControlItemHiddenStateNotifyingHost:(BOOL)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)quickControlItemUpdater:(id)arg0 didUpdateResultsForControlItems:(id)arg1 ;


@end


#endif