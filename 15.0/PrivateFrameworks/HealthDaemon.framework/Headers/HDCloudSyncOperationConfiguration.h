// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCOPERATIONCONFIGURATION_H
#define HDCLOUDSYNCOPERATIONCONFIGURATION_H

@class HDAssertion, NSDictionary, CKOperationGroup, NSString, NSDate, NSUUID;

#import <Foundation/Foundation.h>

#import "HDCloudSyncCachedCloudState.h"
#import "HDCloudSyncComputedState.h"
#import "HDCloudSyncContext.h"
#import "HDCloudSyncRepository.h"

@interface HDCloudSyncOperationConfiguration : NSObject

@property (readonly, nonatomic) HDAssertion *accessibilityAssertion; // ivar: _accessibilityAssertion
@property (readonly, copy, nonatomic) NSDictionary *analyticsDictionary;
@property (readonly, copy, nonatomic) HDCloudSyncCachedCloudState *cachedCloudState; // ivar: _cachedCloudState
@property BOOL canceled; // ivar: _canceled
@property (retain) HDCloudSyncComputedState *computedState; // ivar: _computedState
@property (readonly, copy, nonatomic) HDCloudSyncContext *context; // ivar: _context
@property (readonly, nonatomic) CKOperationGroup *operationGroup; // ivar: _operationGroup
@property (readonly, nonatomic) BOOL rebaseProhibited;
@property (readonly, nonatomic) HDCloudSyncRepository *repository; // ivar: _repository
@property (readonly, copy, nonatomic) NSString *shortProfileIdentifier; // ivar: _shortProfileIdentifier
@property (readonly, copy, nonatomic) NSString *shortSyncIdentifier; // ivar: _shortSyncIdentifier
@property (readonly, copy, nonatomic) NSString *syncContainerPrefix; // ivar: _syncContainerPrefix
@property (readonly, copy, nonatomic) NSDate *syncDate; // ivar: _syncDate
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier; // ivar: _syncIdentifier


-(id)descriptionForSignpost;
-(id)initWithRepository:(id)arg0 operationGroup:(id)arg1 syncContainerPrefix:(id)arg2 context:(id)arg3 accessibilityAssertion:(id)arg4 syncIdentifier:(id)arg5 syncDate:(id)arg6 ;
-(id)pushStoreWithIdentifier:(id)arg0 container:(id)arg1 error:(*id)arg2 ;
-(id)pushStoresForContainer:(id)arg0 error:(*id)arg1 ;
-(void)cancelAllOperations;
-(void)dealloc;


@end


#endif