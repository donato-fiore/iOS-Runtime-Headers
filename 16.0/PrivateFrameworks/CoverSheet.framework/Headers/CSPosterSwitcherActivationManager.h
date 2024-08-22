// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPOSTERSWITCHERACTIVATIONMANAGER_H
#define CSPOSTERSWITCHERACTIVATIONMANAGER_H

@class NSString;
@protocol CSEventHandling, CSPosterSwitcherActivationManagerDelegate, CSPosterSwitcherActivationSource, CSUnlockRequesting;

#import <Foundation/Foundation.h>


@interface CSPosterSwitcherActivationManager : NSObject <CSEventHandling>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSPosterSwitcherActivationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBeenCoachedSinceReset; // ivar: _hasBeenCoachedSinceReset
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSPosterSwitcherActivationSource> *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CSUnlockRequesting> *unlockRequester; // ivar: _unlockRequester


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)initWithSource:(id)arg0 delegate:(id)arg1 unlockRequester:(id)arg2 ;
-(void)_failActivationWithReason:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_presentCoachingMessage:(NSUInteger)arg0 ;
-(void)_resetUnauthenticatedActivationAttemptCount;
// -(void)activateWithHandler:(id)arg0 onFailure:(unk)arg1  ;
-(void)conformsToCSEventHandling;


@end


#endif