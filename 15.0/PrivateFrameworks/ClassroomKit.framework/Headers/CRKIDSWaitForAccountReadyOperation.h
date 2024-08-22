// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKIDSWAITFORACCOUNTREADYOPERATION_H
#define CRKIDSWAITFORACCOUNTREADYOPERATION_H

@class CATOperation, NSMutableDictionary, NSString;
@protocol CRKIDSLocalPrimitives;



@interface CRKIDSWaitForAccountReadyOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // ivar: _IDSLocalPrimitives
@property (readonly, nonatomic) NSMutableDictionary *observedAccountsByLoginID; // ivar: _observedAccountsByLoginID
@property (nonatomic, getter=isObservingKnownAccountChanges) BOOL observingKnownAccountChanges; // ivar: _observingKnownAccountChanges
@property (readonly, copy, nonatomic) NSString *sourceAppleID; // ivar: _sourceAppleID


-(BOOL)isAsynchronous;
-(id)initWithIDSLocalPrimitives:(id)arg0 sourceAppleID:(id)arg1 ;
-(void)beginObservingActiveChangesForAccount:(id)arg0 ;
-(void)beginObservingKnownAccountChanges;
-(void)cancel;
-(void)endObservingActiveChangesForAccount:(id)arg0 ;
-(void)endObservingAllAccounts;
-(void)endObservingKnownAccountChanges;
-(void)knownAccountsDidChange;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observedAccountDidChange:(id)arg0 ;
-(void)run;


@end


#endif