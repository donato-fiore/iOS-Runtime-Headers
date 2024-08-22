// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATXPCTRANSPORT_H
#define CATXPCTRANSPORT_H

@class NSXPCConnection, NSString;
@protocol CATXPCInterface;


#import "CATTransport.h"

@interface CATXPCTransport : CATTransport <CATXPCInterface>

 {
    NSXPCConnection *mConnection;
    BOOL mConnectionHasResumed;
    BOOL mConnectionShouldInvalidate;
    BOOL mConnectionHasInvalidated;
}


@property (readonly) int auditSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) int processIdentifier;
@property (readonly) Class superclass;


+(id)new;
-(BOOL)boolValueForEntitlement:(id)arg0 ;
-(id)init;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)operationToSendMessage:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;
-(void)didInvalidate;
-(void)invalidateConnection;
-(void)processMessage:(id)arg0 completion:(id)arg1 ;
-(void)resumeConnection;
-(void)setUpConnection;
-(void)suspendConnection;
-(void)tearDownConnection;
-(void)transportSendMessageOperation:(id)arg0 processMessage:(id)arg1 ;


@end


#endif