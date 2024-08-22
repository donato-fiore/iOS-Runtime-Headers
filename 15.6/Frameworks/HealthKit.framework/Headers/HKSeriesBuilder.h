// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSERIESBUILDER_H
#define HKSERIESBUILDER_H

@class NSString, NSUUID;
@protocol _HKXPCExportable, HKSeriesBuilderClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKSeriesBuilderConfiguration.h"
#import "HKTaskServerProxyProvider.h"
#import "HKRetryableOperation.h"
#import "HKHealthStore.h"

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface>

 {
    uint8_t _state;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, copy, nonatomic) HKSeriesBuilderConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (retain, nonatomic) HKRetryableOperation *retryableOperation; // ivar: _retryableOperation
@property NSInteger state;
@property (readonly, nonatomic) HKHealthStore *store; // ivar: _store
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)taskServerIdentifier;
+(void)configureClientInterface:(id)arg0 ;
+(void)configureServerInterface:(id)arg0 ;
-(id)_initWithHealthStore:(id)arg0 identifier:(id)arg1 configuration:(id)arg2 ;
-(id)exportedInterface;
-(id)init;
-(id)remoteInterface;
-(void)_resourceQueue_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_discardWithHandler:(id)arg0 ;
-(void)clientRemote_didChangeToState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)discard;
-(void)freezeBuilderWithCompletion:(id)arg0 ;
-(void)recoverWithCompletion:(id)arg0 ;


@end


#endif