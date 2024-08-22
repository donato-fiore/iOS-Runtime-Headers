// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTEXTINPUTSESSION_H
#define RPTEXTINPUTSESSION_H

@class NSString, RTIInputSystemSourceSession;
@protocol RTIInputSystemPayloadDelegate, OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _started;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (readonly, nonatomic) RTIInputSystemSourceSession *rtiSession; // ivar: _rtiSession
@property (copy, nonatomic) id *rtiUpdatedHandler; // ivar: _rtiUpdatedHandler
@property (readonly) Class superclass;


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_handleTextInputChange:(id)arg0 started:(BOOL)arg1 ;
-(void)_handleTextInputStarted:(id)arg0 ;
-(void)_handleTextInputStopped:(id)arg0 ;
-(void)_invalidate;
-(void)activateWithCompletion:(id)arg0 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)invalidate;


@end


#endif