// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAILPROVIDER_H
#define CXVOICEMAILPROVIDER_H

@class NSString;
@protocol CXVoicemailProviderVendorProtocol, CXVoicemailProviderDelegate, CXVoicemailProviderHostProtocol;


#import "CXAbstractProvider.h"

@interface CXVoicemailProvider : CXAbstractProvider <CXVoicemailProviderVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXVoicemailProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CXVoicemailProviderHostProtocol> *hostProtocolDelegate;
@property (readonly) Class superclass;


-(id)pendingVoicemailActionsOfClass:(Class)arg0 withVoicemailUUID:(id)arg1 ;
-(void)_performAction:(id)arg0 ;
-(void)reportNewVoicemailWithUpdate:(id)arg0 ;
-(void)reportNewVoicemailsWithUpdates:(id)arg0 ;
-(void)reportVoicemailRemovedWithUUID:(id)arg0 ;
-(void)reportVoicemailUpdated:(id)arg0 ;
-(void)reportVoicemailsRemovedWithUUIDs:(id)arg0 ;
-(void)reportVoicemailsUpdated:(id)arg0 ;


@end


#endif