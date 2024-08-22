// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXVOICEMAILPROVIDER_H
#define CXVOICEMAILPROVIDER_H

@class NSString, NSArray;
@protocol CXActionDelegateInternal, CXVoicemailProviderVendorProtocol, CXAbstractProvider, CXVoicemailProviderDelegate, CXVoicemailProviderHostProtocol;

#import <Foundation/Foundation.h>

#import "CXAbstractProvider.h"

@interface CXVoicemailProvider : NSObject <CXActionDelegateInternal, CXVoicemailProviderVendorProtocol, CXAbstractProvider>



@property (readonly, nonatomic) CXAbstractProvider *abstractProvider; // ivar: _abstractProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CXVoicemailProviderHostProtocol> *voicemailProviderHostDelegate;


-(id)hostProtocolDelegate;
-(id)init;
-(id)pendingVoicemailActionsOfClass:(Class)arg0 withVoicemailUUID:(id)arg1 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)invalidate;
-(void)performAction:(id)arg0 ;
-(void)reportNewVoicemailWithUpdate:(id)arg0 ;
-(void)reportNewVoicemailsWithUpdates:(id)arg0 ;
-(void)reportVoicemailRemovedWithUUID:(id)arg0 ;
-(void)reportVoicemailUpdated:(id)arg0 ;
-(void)reportVoicemailsRemovedWithUUIDs:(id)arg0 ;
-(void)reportVoicemailsUpdated:(id)arg0 ;


@end


#endif