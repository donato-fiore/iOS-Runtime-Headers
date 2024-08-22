// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPXPCCLIENT_H
#define HKSPXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol BSDescriptionProviding, HKSPClient;

#import <Foundation/Foundation.h>


@interface HKSPXPCClient : NSObject <BSDescriptionProviding>



@property (copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSObject<HKSPClient> *clientLink; // ivar: _clientLink
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int processID;
@property (readonly) Class superclass;


+(id)clientForConnection:(id)arg0 clientIdentifierProvider:(id)arg1 clientLink:(id)arg2 ;
+(id)clientForConnection:(id)arg0 clientLink:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithConnection:(id)arg0 clientIdentifierProvider:(id)arg1 clientLink:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif