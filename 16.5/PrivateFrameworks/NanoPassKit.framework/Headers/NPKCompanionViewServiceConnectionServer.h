// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKCOMPANIONVIEWSERVICECONNECTIONSERVER_H
#define NPKCOMPANIONVIEWSERVICECONNECTIONSERVER_H

@class PDXPCService, NSString;
@protocol NPKCompanionViewServiceConnectionServerProtocol, NPKCompanionViewServiceConnectionServerDelegate;



@interface NPKCompanionViewServiceConnectionServer : PDXPCService <NPKCompanionViewServiceConnectionServerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKCompanionViewServiceConnectionServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_checkCompanionViewServiceConnectionEntitlement;
-(void)presentRemotePassItemSelectionViewControllerForRequest:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;
-(void)presentRemotePassValueEntryViewControllerForRequest:(id)arg0 contact:(id)arg1 completion:(id)arg2 ;


@end


#endif