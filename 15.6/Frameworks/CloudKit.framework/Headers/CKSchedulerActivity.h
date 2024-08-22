// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSCHEDULERACTIVITY_H
#define CKSCHEDULERACTIVITY_H

@class NSDictionary, NSDate, NSString, NSArray;
@protocol NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKContainerID.h"

@interface CKSchedulerActivity : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *additionalXPCActivityCriteria;
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (copy, nonatomic) NSDate *earliestStartDate; // ivar: _earliestStartDate
@property (nonatomic) NSUInteger expectedTransferSizeBytes; // ivar: _expectedTransferSizeBytes
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CKContainer *nullableContainer;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (copy, nonatomic) NSArray *relatedApplicationBundleIdentifiers; // ivar: _relatedApplicationBundleIdentifiers
@property (nonatomic) BOOL shouldDefer; // ivar: _shouldDefer
@property (copy, nonatomic) NSDictionary *undeprecatedAdditionalXPCActivityCriteria;
@property (nonatomic) BOOL userRequestedBackupTask; // ivar: _userRequestedBackupTask
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // ivar: _xpcActivity
@property (copy, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // ivar: _xpcActivityCriteriaOverrides


+(id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 container:(id)arg1 containerID:(id)arg2 priority:(NSInteger)arg3 ;
-(id)initWithIdentifier:(id)arg0 container:(id)arg1 priority:(NSInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 containerID:(id)arg1 priority:(NSInteger)arg2 ;


@end


#endif