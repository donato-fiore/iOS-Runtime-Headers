// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTIMERTABLEVIEWCONTROLLER_H
#define HUTIMERTABLEVIEWCONTROLLER_H

@class NSTimer, NSString, COTimerManager;
@protocol UITableViewDelegate, HUTimerCreationDelegate, HUPresentationDelegate;


#import "HUMobileTimerObjectTableViewController.h"

@interface HUTimerTableViewController : HUMobileTimerObjectTableViewController <UITableViewDelegate, HUTimerCreationDelegate>

 {
    id<HUPresentationDelegate> *presentationDelegate;
}


@property (retain, nonatomic) id *addNotificationObserver; // ivar: _addNotificationObserver
@property (retain, nonatomic) NSTimer *animationTimer; // ivar: _animationTimer
@property (retain, nonatomic) id *canDispatchNotificationObserver; // ivar: _canDispatchNotificationObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *firingNotificationObserver; // ivar: _firingNotificationObserver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *removeNotificationObserver; // ivar: _removeNotificationObserver
@property (retain, nonatomic) id *resetNotificationObserver; // ivar: _resetNotificationObserver
@property (readonly) Class superclass;
@property (retain, nonatomic) COTimerManager *timerManager; // ivar: _timerManager
@property (retain, nonatomic) id *updateNotificationObserver; // ivar: _updateNotificationObserver


-(id)_baseMobileTimerObjectsFuture;
-(id)_canManagerControlAccessory;
-(id)_findTimerObjectForID:(id)arg0 ;
-(id)_newCellForMTTimerObjectUUID:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)presentationDelegate;
-(void)_extractUpdatedTimerObjectsFromNotification:(id)arg0 ;
-(void)_removeTimerObjectAtIndexPath:(id)arg0 ;
-(void)animationTimerTick:(id)arg0 ;
-(void)dealloc;
-(void)presentAddMobileTimerObjectViewControllerOnMainThread;
-(void)setPresentationDelegate:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timerCreationViewController:(id)arg0 didCreateTimer:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif