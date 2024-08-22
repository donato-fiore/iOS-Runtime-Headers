// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIFLANKINGBANNERPRESENTABLEVIEWCONTROLLER_H
#define FCUIFLANKINGBANNERPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, NSString;
@protocol BNPresentable, BNPresentableObservable, FCActivityDescribing, BNPresentableContext;


#import "_FCUIBannerDeactivateControl.h"

@interface FCUIFlankingBannerPresentableViewController : UIViewController <BNPresentable, BNPresentableObservable>

 {
    _FCUIBannerDeactivateControl *_deactivateButton;
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSObject<FCActivityDescribing> *activityDescription; // ivar: _activityDescription
@property (readonly, nonatomic, getter=isActivityEnabled) BOOL activityEnabled; // ivar: _activityEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(id)_pillViewIfLoaded;
-(id)initWithActivityDescription:(id)arg0 requesterIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(id)presentableDescription;
-(void)_configureDeactivateButtonIfNecessary;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)addActionForInfoEvent:(id)arg0 ;
-(void)addPresentableObserver:(id)arg0 ;
-(void)loadView;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)removePresentableObserver:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif