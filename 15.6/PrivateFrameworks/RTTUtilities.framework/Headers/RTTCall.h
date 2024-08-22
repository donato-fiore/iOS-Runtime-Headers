// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTCALL_H
#define RTTCALL_H

@class NSMutableString, AXDispatchTimer, TUCall, NSString, NSDictionary, AVCVirtualTTYDevice;
@protocol AVCVirtualTTYDeviceDelegate, OS_dispatch_queue, RTTCallDelegate;

#import <Foundation/Foundation.h>

#import "RTTConversation.h"

@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate>

 {
    NSInteger _ttyMode;
    NSMutableString *_garbageCollection;
    AXDispatchTimer *_garbageCharacterStripperTimer;
}


@property (retain, nonatomic) TUCall *call; // ivar: _call
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callQueue; // ivar: _callQueue
@property (retain, nonatomic) RTTConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RTTCallDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isViewControllerVisible; // ivar: _isViewControllerVisible
@property (retain, nonatomic) NSDictionary *substitutions; // ivar: _substitutions
@property (readonly) Class superclass;
@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice; // ivar: _ttyDevice


-(BOOL)_handleInitialGarbageTextFromTTY:(id)arg0 device:(id)arg1 ;
-(id)_processText:(id)arg0 withDevice:(id)arg1 ;
-(id)initWithCall:(id)arg0 ;
-(void)audioSessionWasInterrupted:(id)arg0 ;
-(void)callDidReceiveText:(id)arg0 forUtterance:(id)arg1 ;
-(void)dealloc;
-(void)device:(id)arg0 didReceiveCharacter:(unsigned short)arg1 ;
-(void)device:(id)arg0 didReceiveText:(id)arg1 ;
-(void)device:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)deviceDidStop:(id)arg0 ;
-(void)mediaServerDied;
-(void)recreateTTYDevice:(id)arg0 ;
-(void)registerNotifications;
-(void)sendString:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)toggleSystemOutputMute:(BOOL)arg0 ;


@end


#endif