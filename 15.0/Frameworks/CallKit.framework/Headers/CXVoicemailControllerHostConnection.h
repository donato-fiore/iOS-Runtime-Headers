// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXVOICEMAILCONTROLLERHOSTCONNECTION_H
#define CXVOICEMAILCONTROLLERHOSTCONNECTION_H

@class NSString, NSURL, NSSet, NSXPCConnection;
@protocol CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol, CXVoicemailControllerHostConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXVoicemailControllerHostConnection : NSObject <CXVoicemailControllerHostProtocol, CXVoicemailControllerVendorProtocol>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSSet *capabilities; // ivar: _capabilities
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailControllerHostConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic) NSObject<CXVoicemailControllerVendorProtocol> *remoteObjectProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConnection:(id)arg0 serialQueue:(id)arg1 ;
-(void)addOrUpdateVoicemails:(id)arg0 ;
-(void)dealloc;
-(void)removeVoicemails:(id)arg0 ;
-(void)requestTransaction:(id)arg0 reply:(id)arg1 ;
-(void)requestVoicemails:(id)arg0 ;


@end


#endif