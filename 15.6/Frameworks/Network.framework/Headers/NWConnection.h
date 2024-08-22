// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCONNECTION_H
#define NWCONNECTION_H

@class NSError, NWConcrete_nw_connection;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"
#import "NWPath.h"
#import "NWParameters.h"

@interface NWConnection : NSObject

@property (readonly, nonatomic) NWEndpoint *connectedLocalEndpoint;
@property (readonly, nonatomic) NWEndpoint *connectedRemoteEndpoint;
@property (readonly, nonatomic) NSInteger connectionState;
@property (readonly, nonatomic) NWPath *currentPath;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasBetterPath;
@property (retain, nonatomic) NWConcrete_nw_connection *internalConnection; // ivar: _internalConnection
@property NSInteger internalConnectionState; // ivar: _internalConnectionState
@property (retain) NSError *internalError; // ivar: _internalError
@property BOOL internalHasBetterPath; // ivar: _internalHasBetterPath
@property BOOL internalIsViable; // ivar: _internalIsViable
@property (retain) NWPath *internalPath; // ivar: _internalPath
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) unsigned int tlsConnectionTime;
@property (readonly, nonatomic, getter=isViable) BOOL viable;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)connectionWithConnectedSocket:(int)arg0 ;
+(id)connectionWithEndpoint:(id)arg0 parameters:(id)arg1 ;
+(id)connectionWithInternalConnection:(id)arg0 ;
-(id)copyCurrentPath;
-(id)copyError;
-(id)description;
-(id)initWithConnectedSocket:(int)arg0 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)initWithInternalConnection:(id)arg0 ;
-(int)getConnectedSocket;
-(void)cancel;
-(void)cancelCurrentEndpoint;
-(void)forceCancel;
-(void)start;


@end


#endif