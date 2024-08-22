// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMANAGEDOBJECTCONTEXT_H
#define HMDMANAGEDOBJECTCONTEXT_H

@class NSManagedObjectContext;
@protocol HMFAsyncContext;



@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>





-(BOOL)save:(*id)arg0 ;
-(void)assertIsExecuting;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;


@end


#endif