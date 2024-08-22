// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDOBJECTLOOKUP_H
#define HMDOBJECTLOOKUP_H

@class HMFObject, NSString, NSMapTable;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDObjectLookup : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *uuidToObjectMapping; // ivar: _uuidToObjectMapping
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_lookUpObjectWithUUID:(id)arg0 applyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(id)arg4 ;
-(id)initWithWorkQueue:(id)arg0 ;
-(void)applyChange:(id)arg0 previous:(id)arg1 onObject:(id)arg2 result:(id)arg3 completionHandler:(id)arg4 ;
-(void)lookUpAndApplyObjectChange:(id)arg0 previous:(id)arg1 result:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetObjects;
-(void)scanObjects;


@end


#endif