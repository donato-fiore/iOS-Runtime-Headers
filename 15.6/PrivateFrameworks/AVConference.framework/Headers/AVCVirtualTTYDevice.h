// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCVIRTUALTTYDEVICE_H
#define AVCVIRTUALTTYDEVICE_H

@protocol AVCVirtualTTYDeviceDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCVirtualTTYDevice : NSObject {
    AVConferenceXPCClient *_connection;
    id *_delegate;
    BOOL _isStarted;
}


@property (nonatomic) NSObject<AVCVirtualTTYDeviceDelegate> *delegate;


-(BOOL)sendText:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 error:(*id)arg1 streamToken:(NSInteger)arg2 ;
-(id)initWithStreamToken:(NSInteger)arg0 error:(*id)arg1 ;
-(id)sendCharacter:(unsigned short)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForDelegateNotifications;
-(void)registerBlocksForDelegateNotifications;
-(void)start;
-(void)stop;
-(void)terminateSession;


@end


#endif