// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDOPERATION_H
#define HMDBACKGROUNDOPERATION_H

@class HMFObject, NSString, NSDate, NSMutableSet, NSUUID, NSOperationQueue, NSDictionary;
@protocol HMFLogging, NSSecureCoding, HMDBackgroundOperationDataSource;


#import "HMDBackgroundOperationManager.h"
#import "HMDHomeManager.h"

@interface HMDBackgroundOperation : HMFObject <HMFLogging, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMDBackgroundOperationManager *bgOpsManager; // ivar: _bgOpsManager
@property (readonly, nonatomic) NSObject<HMDBackgroundOperationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDate *deferralDate; // ivar: _deferralDate
@property (readonly) NSMutableSet *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) NSInteger failureCount; // ivar: _failureCount
@property BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (nonatomic) BOOL isExpired; // ivar: _isExpired
@property (nonatomic) BOOL isReadyToRun; // ivar: _isReadyToRun
@property (readonly, nonatomic) NSUUID *operationUUID; // ivar: _operationUUID
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) NSDate *scheduledDate; // ivar: _scheduledDate
@property (readonly) Class superclass;
@property (readonly) NSDictionary *userData; // ivar: _userData


+(BOOL)persistent;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)predicate;
-(BOOL)hasDependency:(id)arg0 ;
-(BOOL)isDeferred;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mainWithError:(*id)arg0 ;
-(BOOL)runOperation:(id)arg0 ;
-(id)AllDependencies;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 userData:(id)arg1 backGroundOpsManager:(id)arg2 scheduledDate:(id)arg3 expirationDate:(id)arg4 dataSource:(id)arg5 dependentOperations:(id)arg6 ;
-(id)initWithUserData:(id)arg0 ;
-(id)initWithUserData:(id)arg0 dataSource:(id)arg1 backGroundOpsManager:(id)arg2 ;
-(id)logIdentifier;
-(void)addDependency:(id)arg0 ;
-(void)deferWithFailureCount:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markOperationFinished;
-(void)removeDependency:(id)arg0 ;


@end


#endif