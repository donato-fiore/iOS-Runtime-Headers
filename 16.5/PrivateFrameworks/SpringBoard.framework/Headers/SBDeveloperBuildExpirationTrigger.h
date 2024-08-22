// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVELOPERBUILDEXPIRATIONTRIGGER_H
#define SBDEVELOPERBUILDEXPIRATIONTRIGGER_H

@class NSDate, NSString;
@protocol SBAppInteractionEventSourceObserving, SBAppInteractionEventSourceProviding;

#import <Foundation/Foundation.h>

#import "SBAlertItemsController.h"

@interface SBDeveloperBuildExpirationTrigger : NSObject <SBAppInteractionEventSourceObserving>

 {
    SBAlertItemsController *_alertItemsController;
    id<SBAppInteractionEventSourceProviding> *_eventSource;
    NSDate *_expirationDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithAlertItemsController:(id)arg0 eventSource:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithAlertItemsController:(id)arg0 eventSource:(id)arg1 ;
-(void)_coverSheetDidDismiss:(id)arg0 ;
-(void)dealloc;
-(void)eventSource:(id)arg0 didFinishTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(BOOL)arg0 toLauncher:(BOOL)arg1 ;


@end


#endif