// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTMATERIALIZEDCONNECTION_H
#define ASTMATERIALIZEDCONNECTION_H

@class NSString, NSMutableURLRequest;
@protocol ASTConnection, ASTConnectionStatusDelegate;

#import <Foundation/Foundation.h>

#import "ASTIdentity.h"

@interface ASTMaterializedConnection : NSObject <ASTConnection>



@property (readonly, nonatomic) NSString *accept;
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASTConnectionStatusDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didReceiveResponse; // ivar: _didReceiveResponse
@property (readonly, nonatomic) NSString *endpoint;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ASTIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) NSString *method;
@property (nonatomic) NSInteger networkDisconnectedRetryCount; // ivar: _networkDisconnectedRetryCount
@property (readonly, nonatomic) NSMutableURLRequest *request; // ivar: _request
@property (nonatomic) BOOL retryOnNetworkDisconnected; // ivar: _retryOnNetworkDisconnected
@property (readonly, nonatomic) NSUInteger rootOfTrust; // ivar: _rootOfTrust
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (copy, nonatomic) NSString *signature; // ivar: _signature
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)init;
-(void)addBody:(id)arg0 gzip:(BOOL)arg1 ;


@end


#endif