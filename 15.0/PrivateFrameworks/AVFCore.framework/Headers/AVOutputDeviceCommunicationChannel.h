// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTDEVICECOMMUNICATIONCHANNEL_H
#define AVOUTPUTDEVICECOMMUNICATIONCHANNEL_H

@protocol AVOutputDeviceCommunicationChannelImpl, AVOutputDeviceCommunicationChannelDelegate;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceCommunicationChannel : NSObject {
    id<AVOutputDeviceCommunicationChannelImpl> *_impl;
    id<AVOutputDeviceCommunicationChannelDelegate> *_delegate;
}


@property (weak) NSObject<AVOutputDeviceCommunicationChannelDelegate> *delegate;


-(id)initWithOutputDeviceCommunicationChannelImpl:(id)arg0 ;
-(void)close;
-(void)communicationChannelImpl:(id)arg0 didReceiveData:(id)arg1 ;
-(void)communicationChannelImplDidClose:(id)arg0 ;
-(void)dealloc;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif