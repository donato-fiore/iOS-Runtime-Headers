// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHAWARDSKEYVALUESERVER_H
#define ACHAWARDSKEYVALUESERVER_H

@class HDStandardTaskServer, NSString, NSMutableDictionary, HDKeyValueDomain;
@protocol ACHAwardsKeyValueServerInterface;



@interface ACHAwardsKeyValueServer : HDStandardTaskServer <ACHAwardsKeyValueServerInterface>

 {
    os_unfair_lock_s _domainLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *domainsByName; // ivar: _domainsByName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDKeyValueDomain *legacyDomain; // ivar: _legacyDomain
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)_domainForName:(id)arg0 ;
-(id)_transactionContextForWritingProtectedDataWithIdentifier:(id)arg0 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)remote_protectedDataAvailableWithCompletion:(id)arg0 ;
-(void)remote_removeValuesForKeys:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)remote_removeValuesForKeysInDomains:(id)arg0 completion:(id)arg1 ;
-(void)remote_setLegacyValuesWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)remote_setValue:(id)arg0 forKey:(id)arg1 domain:(id)arg2 completion:(id)arg3 ;
-(void)remote_setValuesWithDictionary:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)remote_setValuesWithDomainDictionary:(id)arg0 completion:(id)arg1 ;
-(void)remote_valueForKey:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)remote_valuesForKeys:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;


@end


#endif