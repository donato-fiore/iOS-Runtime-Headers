// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSLISTENER_H
#define STSLISTENER_H

@class NFFieldDetectSession, NSString;
@protocol NFFieldDetectSessionDelegate, OS_dispatch_queue, STSListenerDelegate;

#import <Foundation/Foundation.h>

#import "STSField.h"
#import "STSHardwareManagerWrapper.h"

@interface STSListener : NSObject <NFFieldDetectSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NFFieldDetectSession *_nearFieldFdSession;
    STSField *_lastField;
    STSHardwareManagerWrapper *_nfHwManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<STSListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)startWithDelegate:(id)arg0 ;
-(id)stop;
-(void)didEndSession;
-(void)didEnterField:(id)arg0 ;
-(void)didExitField;
-(void)didStartSession:(id)arg0 ;
-(void)fieldDetectSession:(id)arg0 didDetectField:(BOOL)arg1 ;
-(void)fieldDetectSession:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg0 ;
-(void)fieldDetectSessionDidExitField:(id)arg0 ;


@end


#endif