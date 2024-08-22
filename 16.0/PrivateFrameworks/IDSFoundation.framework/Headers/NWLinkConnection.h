// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWLINKCONNECTION_H
#define NWLINKCONNECTION_H

@class NSString;
@protocol OS_nw_connection, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface NWLinkConnection : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (readonly, nonatomic) NSUInteger connectionID; // ivar: _connectionID
@property (nonatomic) NSUInteger disconnectionState; // ivar: _disconnectionState
@property (nonatomic) BOOL ignoreCancel; // ivar: _ignoreCancel
@property (readonly, nonatomic) unsigned int interfaceIndex; // ivar: _interfaceIndex
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint; // ivar: _localEndpoint
@property (nonatomic) unsigned int messageType; // ivar: _messageType
@property (nonatomic) BOOL peelOffNewConnection; // ivar: _peelOffNewConnection
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint; // ivar: _remoteEndpoint
@property (nonatomic) CGFloat scheduledDisconnectTime; // ivar: _scheduledDisconnectTime
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL supportsNAT64; // ivar: _supportsNAT64
@property (nonatomic) NSUInteger transactionID; // ivar: _transactionID
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isQRControlConnection;
-(id)initWithBaseNWLinkConnection:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithType:(NSUInteger)arg0 interfaceIndex:(unsigned int)arg1 localEndpoint:(id)arg2 remoteEndpoint:(id)arg3 ;


@end


#endif