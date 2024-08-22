// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASEPRUNINGTASK_H
#define HDDATABASEPRUNINGTASK_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDDatabasePruningTask : NSObject {
    HDProfile *_profile;
}




-(BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg0 nowDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg0 nowDate:(id)arg1 prunedObjectLimit:(NSUInteger)arg2 prunedObjectTransactionLimit:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithProfile:(id)arg0 ;
-(void)enqueueMaintenanceOperationOnCoordinator:(id)arg0 takeAccessibilityAssertion:(BOOL)arg1 nowDate:(id)arg2 completion:(id)arg3 ;


@end


#endif