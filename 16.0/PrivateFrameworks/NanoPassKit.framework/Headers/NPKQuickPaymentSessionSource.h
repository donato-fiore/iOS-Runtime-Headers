// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKQUICKPAYMENTSESSIONSOURCE_H
#define NPKQUICKPAYMENTSESSIONSOURCE_H

@class PKPass, NSDictionary;
@protocol NPKQuickPaymentSessionSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKButtonListener.h"
#import "NPKQuickPaymentSessionLocalAuthenticationCoordinator.h"

@interface NPKQuickPaymentSessionSource : NSObject {
    id<NPKQuickPaymentSessionSourceDelegate> *_delegate;
    NPKButtonListener *_buttonListener;
    NSObject<OS_dispatch_queue> *_sessionSourceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _delegateHandlingButtonEvents;
    BOOL _deferAuthorization;
    BOOL _requireFirstInQueue;
    NSUInteger _preconditionState;
    PKPass *_initialPass;
    NSDictionary *_vasPasses;
    NPKQuickPaymentSessionLocalAuthenticationCoordinator *_localAuthenticationCoordinator;
}




-(id)initWithDelegate:(id)arg0 buttonListener:(id)arg1 callbackQueue:(id)arg2 ;
-(void)_handlePMUButtonEvent;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)handleDoublePressEvent;
-(void)setDeferAuthorization:(BOOL)arg0 ;
-(void)setDelegateHandlingButtonEvents:(BOOL)arg0 ;
-(void)setInitialPass:(id)arg0 ;
-(void)setLocalAuthenticationCoordinator:(id)arg0 ;
-(void)setPreconditionState:(NSUInteger)arg0 ;
-(void)setRequireFirstInQueue:(BOOL)arg0 ;
-(void)setVasPasses:(id)arg0 ;


@end


#endif