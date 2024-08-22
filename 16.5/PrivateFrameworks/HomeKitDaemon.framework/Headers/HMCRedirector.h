// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCREDIRECTOR_H
#define HMCREDIRECTOR_H

@class HMFObject, NSMapTable, NSString;
@protocol HMFLogging;


#import "HMCPartition.h"

@interface HMCRedirector : HMFObject <HMFLogging>

 {
    hmf_unfair_data_lock_s _lock;
    NSMapTable *_insertClass;
    NSMapTable *_updateClass;
    NSMapTable *_updateModelID;
    NSMapTable *_deleteClass;
    NSMapTable *_deleteModelID;
    HMCPartition *_partition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)processInserts:(id)arg0 updates:(id)arg1 deletes:(id)arg2 ;
-(id)addTarget:(id)arg0 selector:(SEL)arg1 changeMask:(NSUInteger)arg2 forChangesOfObjectsWithModelType:(id)arg3 forChangesOfObjectsWithModelID:(id)arg4 ;
-(id)addTarget:(id)arg0 selector:(SEL)arg1 changeMask:(NSUInteger)arg2 forChangesOfObjectsWithModelType:(id)arg3 forChangesOfObjectsWithModelID:(id)arg4 error:(*id)arg5 ;
-(id)initWithLabel:(id)arg0 partition:(id)arg1 ;
-(id)logIdentifier;
-(void)removeRegistrationForChangeOfObjectsOfModelType:(id)arg0 forChangesOfObjectsWithModelID:(id)arg1 ;


@end


#endif