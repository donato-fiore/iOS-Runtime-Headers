// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMDATAPROTECTIONMANAGER_H
#define MCMDATAPROTECTIONMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCMDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *protectionOperationFileQueue; // ivar: _protectionOperationFileQueue


+(id)defaultManager;
-(BOOL)restartPendingDataProtectionOperationsWithError:(*id)arg0 ;
-(id)init;
-(int)desiredDataProtectionClassForMetadata:(id)arg0 clientIdentity:(id)arg1 ;
-(int)intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg0 clientIdentity:(id)arg1 containerClass:(NSUInteger)arg2 info:(id)arg3 ;
-(void)_startDataProtectionChangeOperation:(id)arg0 withCompletion:(id)arg1 ;
-(void)setDataProtectionOnDataContainerForMetadata:(id)arg0 isSecondOrThirdPartyApp:(BOOL)arg1 retryIfLocked:(BOOL)arg2 deferUntilNextLaunch:(BOOL)arg3 withCompletion:(id)arg4 ;


@end


#endif