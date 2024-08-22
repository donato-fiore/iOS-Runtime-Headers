// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAPCLIENTPORT_H
#define IAPCLIENTPORT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IAPClientPort : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientPortEventQueue; // ivar: _clientPortEventQueue
@property (nonatomic) id *sendDataHandler; // ivar: _sendDataHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sendDataHandlerQueue; // ivar: _sendDataHandlerQueue
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 queue:(id)arg1 sendHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif