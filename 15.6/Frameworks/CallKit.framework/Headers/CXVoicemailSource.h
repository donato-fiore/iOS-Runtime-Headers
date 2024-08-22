// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAILSOURCE_H
#define CXVOICEMAILSOURCE_H

@class NSString, NSURL;
@protocol CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol, CXVoicemailSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXVoicemailSource : NSObject <CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic) int processIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CXVoicemailProviderVendorProtocol> *vendorProtocolDelegate;


-(id)bundle;
-(id)init;
-(void)actionCompleted:(id)arg0 ;
-(void)beginWithCompletionHandler:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)registerWithConfiguration:(id)arg0 ;
-(void)reportNewVoicemailsWithUpdates:(id)arg0 ;
-(void)reportVoicemailsRemovedWithUUIDs:(id)arg0 ;
-(void)reportVoicemailsUpdated:(id)arg0 ;
-(void)requestTransaction:(id)arg0 reply:(id)arg1 ;


@end


#endif