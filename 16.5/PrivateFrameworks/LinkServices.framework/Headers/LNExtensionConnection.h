// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNEXTENSIONCONNECTION_H
#define LNEXTENSIONCONNECTION_H

@class _EXExtensionProcess, NSXPCConnection;


#import "LNConnection.h"

@interface LNExtensionConnection : LNConnection

@property (retain, nonatomic) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess
@property (retain, nonatomic) NSXPCConnection *mediatorXPCConnection; // ivar: _mediatorXPCConnection


-(BOOL)refreshWithOptions:(id)arg0 ;
-(id)extensionIdentityWithExtensionPointIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)connectDirectlyWithOptions:(id)arg0 ;
-(void)connectUsingListenerEndpoint:(id)arg0 ;
-(void)connectUsingMediatorWithOptions:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)invalidateExtensionProcess;
-(void)invalidateMediatorXPCConnection;


@end


#endif