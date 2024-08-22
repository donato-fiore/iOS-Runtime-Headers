// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUTCPSERVER_H
#define CUTCPSERVER_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUBonjourAdvertiser.h"
#import "CUNetLinkManager.h"

@interface CUTCPServer : NSObject {
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_listenerSourceV4;
    NSObject<OS_dispatch_source> *_listenerSourceV6;
    *LogCategory _ucat;
}


@property (retain, nonatomic) CUBonjourAdvertiser *bonjourAdvertiser; // ivar: _bonjourAdvertiser
@property (copy, nonatomic) id *connectionAcceptHandler; // ivar: _connectionAcceptHandler
@property (copy, nonatomic) id *connectionEndedHandler; // ivar: _connectionEndedHandler
@property (copy, nonatomic) id *connectionPrepareHandler; // ivar: _connectionPrepareHandler
@property (copy, nonatomic) id *connectionStartedHandler; // ivar: _connectionStartedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) unk interfaceAddress; // ivar: _interfaceAddress
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int maxConnectionCount; // ivar: _maxConnectionCount
@property (retain, nonatomic) CUNetLinkManager *netLinkManager; // ivar: _netLinkManager
@property (nonatomic) int tcpListenPort; // ivar: _tcpListenPort
@property (nonatomic) int tcpListeningPort; // ivar: _tcpListeningPort


-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(id)description;
-(id)detailedDescription;
-(id)init;
-(void)_handleConnectionAccept:(int)arg0 ;
-(void)_handleConnectionInvalidated:(id)arg0 addr:(*unk)arg1 ;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif