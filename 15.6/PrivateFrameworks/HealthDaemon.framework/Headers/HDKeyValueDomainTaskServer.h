// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDKEYVALUEDOMAINTASKSERVER_H
#define HDKEYVALUEDOMAINTASKSERVER_H

@protocol HKKeyValueDomainServerInterface;


#import "HDStandardTaskServer.h"
#import "HDKeyValueDomain.h"

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface>

 {
    HDKeyValueDomain *_keyValueDomain;
}




+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)_unitTest_overrideKeyValueDomainCategory:(NSInteger)arg0 ;
-(void)remote_allValuesWithCompletion:(id)arg0 ;
-(void)remote_dataForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_dateForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_numberForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeValuesForKeys:(id)arg0 completion:(id)arg1 ;
-(void)remote_setData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setDate:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setValueForAllKeys:(id)arg0 completion:(id)arg1 ;
-(void)remote_setValuesWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)remote_stringForKey:(id)arg0 completion:(id)arg1 ;


@end


#endif