// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATABASEVALIDATION_H
#define HKDATABASEVALIDATION_H

@class NSUUID, NSMutableDictionary, NSString;
@protocol _HKXPCExportable, HKDatabaseValidationClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKDatabaseValidation : NSObject <_HKXPCExportable, HKDatabaseValidationClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    id *_integrityErrorHandler;
    id *_validationErrorHandler;
    NSMutableDictionary *_integrityErrorHandlerDict;
    NSMutableDictionary *_validationErrorHandlerDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)clientRemote_processIntegrityErrorString:(id)arg0 errorHandlerIdentifier:(id)arg1 ;
-(void)clientRemote_processValidationError:(id)arg0 errorHandlerIdentifier:(id)arg1 ;
// -(void)clientRemote_synchronizeWithCompletion:(id)arg0 success:(unk)arg1 error:(BOOL)arg2  ;
-(void)connectionInvalidated;
// -(void)performIntegrityCheckOnDatabase:(NSInteger)arg0 identifier:(id)arg1 errorHandler:(id)arg2 completion:(unk)arg3  ;
// -(void)validateEntitiesWithIdentifier:(id)arg0 errorHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif