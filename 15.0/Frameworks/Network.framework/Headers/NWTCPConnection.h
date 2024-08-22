// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWTCPCONNECTION_H
#define NWTCPCONNECTION_H

@class NSDictionary, NSError, NSData, NSString;
@protocol NWPrettyDescription, NWTCPConnectionAuthenticationDelegate, OS_nw_connection;

#import <Foundation/Foundation.h>

#import "NWPath.h"
#import "NWEndpoint.h"
#import "NWParameters.h"

@interface NWTCPConnection : NSObject <NWPrettyDescription>



@property (readonly, nonatomic) NSDictionary *TCPInfo;
@property (readonly, nonatomic) BOOL TFOSucceeded;
@property (readonly, nonatomic) NWPath *connectedPath;
@property (weak) NSObject<NWTCPConnectionAuthenticationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NWEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) BOOL hasBetterPath; // ivar: _hasBetterPath
@property (retain) NSObject<OS_nw_connection> *internalConnection; // ivar: _internalConnection
@property (retain) NSError *internalError; // ivar: _internalError
@property (readonly, nonatomic) BOOL isMultipath;
@property (readonly, nonatomic) NWEndpoint *localAddress;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) NSUInteger multipathConnectedSubflowCount;
@property (readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property (readonly, nonatomic) NSUInteger multipathSubflowCount;
@property (readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (readonly, nonatomic) NWParameters *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NWEndpoint *remoteAddress;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSData *txtRecord;
@property (nonatomic, getter=isViable) BOOL viable; // ivar: _viable


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)stringFromNWTCPConnectionState:(NSInteger)arg0 ;
-(BOOL)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg0 ;
-(BOOL)startInternal;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithAcceptedInternalConnection:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 delegate:(id)arg2 ;
-(id)initWithUpgradeForConnection:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)handleIdentityRequestWithMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg0 trust:(id)arg1 completionHandler:(id)arg2 ;
-(void)readLength:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)readMinimumLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setupEventHandler;
-(void)write:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeClose;


@end


#endif