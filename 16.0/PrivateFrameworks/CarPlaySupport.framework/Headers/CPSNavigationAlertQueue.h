// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSNAVIGATIONALERTQUEUE_H
#define CPSNAVIGATIONALERTQUEUE_H

@class NSTimer, CPNavigationAlert, NSString;
@protocol CPSButtonDelegate, CPSApplicationStateObserving, CPSNavigationAlertQueueDelegate, CPTemplateDelegate;

#import <Foundation/Foundation.h>

#import "CPSApplicationStateMonitor.h"
#import "CPSNavigationAlertView.h"

@interface CPSNavigationAlertQueue : NSObject <CPSButtonDelegate, CPSApplicationStateObserving>



@property (retain, nonatomic) NSTimer *alertTimer; // ivar: _alertTimer
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // ivar: _applicationStateMonitor
@property (readonly, nonatomic) CPNavigationAlert *currentAlert; // ivar: _currentAlert
@property (readonly, nonatomic) CPSNavigationAlertView *currentAlertView; // ivar: _currentAlertView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CPSNavigationAlertQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDisplayingAlert;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate


-(BOOL)_canBeginAnimatingAlert;
-(id)initWithDelegate:(id)arg0 applicationStateMonitor:(id)arg1 ;
-(void)_clearAlertViewIfNecessaryForDismissedAlertView:(id)arg0 ;
-(void)_startAlertAnimations;
-(void)_visibleAlertTimerFired:(id)arg0 ;
-(void)applicationStateMonitor:(id)arg0 didBecomeActive:(BOOL)arg1 ;
-(void)beginAnimatingAlertIfPossible;
-(void)didSelectButton:(id)arg0 ;
-(void)dismissCurrentNavigationAlertAnimated:(BOOL)arg0 context:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)prepareNavigationAlert:(id)arg0 templateDelegate:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif