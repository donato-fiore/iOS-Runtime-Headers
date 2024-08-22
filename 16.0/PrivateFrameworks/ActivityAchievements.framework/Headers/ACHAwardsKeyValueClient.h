// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHAWARDSKEYVALUECLIENT_H
#define ACHAWARDSKEYVALUECLIENT_H

@class NSString, NSUUID, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, ACHAwardsKeyValueClientInterface, OS_dispatch_queue, ACHAwardsKeyValueServerInterface;

#import <Foundation/Foundation.h>


@interface ACHAwardsKeyValueClient : NSObject <_HKXPCExportable, ACHAwardsKeyValueClientInterface>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *injectedErrorHandler; // ivar: _injectedErrorHandler
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (retain, nonatomic) NSObject<ACHAwardsKeyValueServerInterface> *serverProxy; // ivar: _serverProxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) Class superclass;


-(BOOL)protectedDataAvailable;
-(BOOL)removeValuesForKeys:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeValuesForKeysInDomains:(id)arg0 error:(*id)arg1 ;
-(BOOL)setLegacyValuesWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
-(BOOL)setValuesWithDictionary:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValuesWithDomainDictionary:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(id)valueForKey:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
-(id)valuesForKeys:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
-(void)connectionInvalidated;


@end


#endif