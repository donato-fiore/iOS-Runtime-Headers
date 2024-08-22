// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMDATAPROTECTIONCHANGEOPERATION_H
#define MCMDATAPROTECTIONCHANGEOPERATION_H

@class NSUUID;
@protocol MCMMetadata, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCMUserIdentityCache.h"

@interface MCMDataProtectionChangeOperation : NSObject

@property (nonatomic) int changeType; // ivar: _changeType
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSObject<MCMMetadata> *dataContainerMetadata; // ivar: _dataContainerMetadata
@property (retain, nonatomic) NSUUID *internalChangeID; // ivar: _internalChangeID
@property (nonatomic) int newDataProtectionClass; // ivar: _newDataProtectionClass
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL retried; // ivar: _retried
@property (nonatomic) BOOL retryIfLocked; // ivar: _retryIfLocked
@property (copy) id *retryStartBlock; // ivar: _retryStartBlock
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


+(BOOL)deleteUpdateFileWithContainerIdentity:(id)arg0 error:(*id)arg1 ;
+(id)_readAndValidateDataProtectionUpdateAtURL:(id)arg0 userIdentityCache:(id)arg1 error:(*id)arg2 ;
+(id)dataProtectionChangeOperationAtURL:(id)arg0 queue:(id)arg1 error:(*id)arg2 ;
+(id)dataProtectionChangeOperationWithContainerMetadata:(id)arg0 settingClass:(int)arg1 retryingIfLocked:(BOOL)arg2 changeType:(int)arg3 queue:(id)arg4 ;
+(id)urlForProtectionOperationWithContainerIdentity:(id)arg0 ;
-(BOOL)_deleteUpdateFileWithError:(*id)arg0 ;
-(BOOL)_onQueue_deleteUpdateFileWithError:(*id)arg0 ;
-(BOOL)_onQueue_stillMostCurrentUpdate;
-(BOOL)_onQueue_writeToDiskWithError:(*id)arg0 ;
-(BOOL)_runChangeOperationNeedToRetry:(*BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)_stillMostCurrentUpdate;
-(BOOL)writeToDiskWithError:(*id)arg0 ;
-(id)initWithContainerMetadata:(id)arg0 newClass:(int)arg1 retryingIfLocked:(BOOL)arg2 changeType:(int)arg3 internalChangeID:(id)arg4 queue:(id)arg5 userIdentityCache:(id)arg6 ;
-(id)initWithContainerMetadata:(id)arg0 newClass:(int)arg1 retryingIfLocked:(BOOL)arg2 changeType:(int)arg3 queue:(id)arg4 userIdentityCache:(id)arg5 ;
-(void)performChangeOperation;


@end


#endif