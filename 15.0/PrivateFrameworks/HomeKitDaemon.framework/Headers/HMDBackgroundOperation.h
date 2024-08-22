// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKGROUNDOPERATION_H
#define HMDBACKGROUNDOPERATION_H

@class HMFObject, NSString, NSMutableSet, NSDate, NSUUID, NSDictionary;
@protocol HMFLogging, NSSecureCoding;


#import "HMDHomeManager.h"

@interface HMDBackgroundOperation : HMFObject <HMFLogging, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableSet *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *expirationDate; // ivar: _expirationDate
@property BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSUUID *operationUUID; // ivar: _operationUUID
@property (readonly) NSDate *scheduledDate; // ivar: _scheduledDate
@property (readonly) Class superclass;
@property (readonly) NSDictionary *userData; // ivar: _userData


+(BOOL)persistent;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)predicate;
-(BOOL)hasDependency:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired;
-(BOOL)mainWithError:(*id)arg0 ;
-(BOOL)runOperation:(id)arg0 ;
-(id)AllDependencies;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 userData:(id)arg1 scheduledDate:(id)arg2 expirationDate:(id)arg3 dependentOperations:(id)arg4 ;
-(id)initWithUserData:(id)arg0 ;
-(void)addDependency:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markOperationFinished;
-(void)removeDependency:(id)arg0 ;


@end


#endif