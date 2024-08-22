// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _COMESSAGECHANNELCONNECTIONPROVIDER_H
#define _COMESSAGECHANNELCONNECTIONPROVIDER_H

@class NSString, NSXPCConnection;
@protocol COMessageChannelConnectionProvider;

#import <Foundation/Foundation.h>


@interface _COMessageChannelConnectionProvider : NSObject <COMessageChannelConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCConnection *messageChannelServiceConnection; // ivar: _messageChannelServiceConnection
@property (readonly) Class superclass;




@end


#endif