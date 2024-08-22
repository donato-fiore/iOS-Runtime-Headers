// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKTRANSIENTASSERTION_H
#define NPKTRANSIENTASSERTION_H

@class NSString, NSXPCConnection;
@protocol NPKTransientPassAssertionServerClientProtocol;

#import <Foundation/Foundation.h>


@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)_remoteObjectProxy;
-(id)initWithQueue:(id)arg0 ;
-(void)_resyncState;
-(void)didEnterFieldForPassWithUniqueID:(id)arg0 ;
-(void)handleDelegatedDoublePressEvent;
-(void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)arg0 ;
-(void)invalidate;


@end


#endif