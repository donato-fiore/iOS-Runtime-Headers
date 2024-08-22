// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMANAGEDOBJECTCONTEXT_H
#define WFMANAGEDOBJECTCONTEXT_H

@class NSManagedObjectContext;



@interface WFManagedObjectContext : NSManagedObjectContext



-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
-(void)logFaultForIncompatibleSortDescriptorsInFetchRequest:(id)arg0 ;


@end


#endif