// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAPCLIENTPORTMANAGER_H
#define IAPCLIENTPORTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IAPClientPortManager : NSObject {
    NSMutableDictionary *_portList;
    NSObject<OS_dispatch_queue> *_portListQueue;
    BOOL _iaptransportdIsRunning;
    NSObject<OS_xpc_object> *_iaptransportdXPCConnection;
}


@property (nonatomic) BOOL iaptransportdIsRunning;


+(id)sharedInstance;
-(id)init;
-(int)forwardAccessoryDataToIAP:(id)arg0 data:(char *)arg1 length:(unsigned short)arg2 ;
-(int)registerSendDataHandler:(id)arg0 queue:(id)arg1 sendBlock:(id)arg2 ;
-(int)unregisterSendDataHandler:(id)arg0 ;
-(void)dealloc;
-(void)reRegisterHandlers;
-(void)sendData:(id)arg0 data:(char *)arg1 length:(unsigned short)arg2 ;


@end


#endif