// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKUSSDALERTSESSION_H
#define STKUSSDALERTSESSION_H

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol NSXPCListenerDelegate, STKUSSDHostCommunication;


#import "STKAlertSession.h"

@interface STKUSSDAlertSession : STKAlertSession <NSXPCListenerDelegate, STKUSSDHostCommunication>

 {
    BOOL _hasReceivedContent;
}


@property (readonly, nonatomic) NSMutableArray *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (nonatomic) BOOL hasReceivedContent;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *ussdConnection; // ivar: _ussdConnection
@property (readonly, nonatomic) NSXPCListener *ussdListener; // ivar: _ussdListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithLogger:(id)arg0 responseProvider:(id)arg1 event:(NSInteger)arg2 options:(id)arg3 sound:(id)arg4 ;
-(void)invalidate;
-(void)performUSSDUpdate:(id)arg0 ;
-(void)wakeup;


@end


#endif