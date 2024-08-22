// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCOMPOUNDSCHEDULE_H
#define PFCOMPOUNDSCHEDULE_H

@protocol PFOperationSchedule;

#import <Foundation/Foundation.h>


@interface PFCompoundSchedule : NSObject <PFOperationSchedule>

 {
    ? type;
    ? children;
}




-(BOOL)shouldExecuteOn:(id)arg0 previousExecution:(id)arg1 ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 children:(id)arg1 ;


@end


#endif