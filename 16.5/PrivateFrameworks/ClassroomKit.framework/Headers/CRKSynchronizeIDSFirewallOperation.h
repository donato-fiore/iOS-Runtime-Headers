// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSYNCHRONIZEIDSFIREWALLOPERATION_H
#define CRKSYNCHRONIZEIDSFIREWALLOPERATION_H

@class CATOperation, NSSet;
@protocol CRKIDSPrimitives, CRKIDSLocalFirewallStorage;



@interface CRKSynchronizeIDSFirewallOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (retain, nonatomic) CATOperation *addAllowedAppleIDsOperation; // ivar: _addAllowedAppleIDsOperation
@property (copy, nonatomic) NSSet *appleIDsToAdd; // ivar: _appleIDsToAdd
@property (copy, nonatomic) NSSet *appleIDsToRemove; // ivar: _appleIDsToRemove
@property (retain, nonatomic) CATOperation *fetchAllowedAppleIDsOperation; // ivar: _fetchAllowedAppleIDsOperation
@property (readonly, nonatomic) NSObject<CRKIDSLocalFirewallStorage> *localStorage; // ivar: _localStorage
@property (retain, nonatomic) CATOperation *removeAllowedAppleIDsOperation; // ivar: _removeAllowedAppleIDsOperation
@property (readonly, copy, nonatomic) NSSet *trustedRosterAppleIDs; // ivar: _trustedRosterAppleIDs


-(BOOL)isAsynchronous;
-(id)initWithIDSPrimitives:(id)arg0 localStorage:(id)arg1 trustedRosterAppleIDs:(id)arg2 ;
-(id)operationToAddAllowedAppleIDs:(id)arg0 ;
-(id)operationToFetchAllowedAppleIDs;
-(id)operationToRemoveAllowedAppleIDs:(id)arg0 ;
-(void)addAllowedAppleIDs;
-(void)cancel;
-(void)computeChanges;
-(void)fetchAllowedAppleIDs;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)operationToAddAllowedAppleIDsDidFinish:(id)arg0 ;
-(void)operationToFetchAppleIDsDidFinish:(id)arg0 ;
-(void)operationToRemoveAllowedAppleIDsDidFinish:(id)arg0 ;
-(void)removeAllowedAppleIDs;
-(void)run;


@end


#endif