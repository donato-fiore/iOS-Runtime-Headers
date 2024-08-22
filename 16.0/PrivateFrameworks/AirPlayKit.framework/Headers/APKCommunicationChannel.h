// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APKCOMMUNICATIONCHANNEL_H
#define APKCOMMUNICATIONCHANNEL_H

@class AVOutputDeviceCommunicationChannel, NSString;
@protocol APKOutputDeviceCommunicationChannel, AVOutputDeviceCommunicationChannelDelegate;

#import <Foundation/Foundation.h>


@interface APKCommunicationChannel : NSObject <APKOutputDeviceCommunicationChannel, AVOutputDeviceCommunicationChannelDelegate>



@property (readonly, nonatomic) AVOutputDeviceCommunicationChannel *channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onClose; // ivar: _onClose
@property (copy, nonatomic) id *onData; // ivar: _onData
@property (readonly) Class superclass;


-(id)initWithCommunicationChannel:(id)arg0 ;
-(void)close;
-(void)communicationChannel:(id)arg0 didReceiveData:(id)arg1 ;
-(void)communicationChannelDidClose:(id)arg0 ;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif