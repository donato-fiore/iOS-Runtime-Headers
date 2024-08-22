// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCPACKETRELAYDRIVER_H
#define AVCPACKETRELAYDRIVER_H


#import <Foundation/Foundation.h>


@interface AVCPacketRelayDriver : NSObject



+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startMonitoringFileDescriptor:(int)arg0 forConnection:(id)arg1 ;
-(void)stopMonitoringFileDescriptor:(int)arg0 ;


@end


#endif