// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMAXIMUMFREQUENCYSCHEDULE_H
#define PFMAXIMUMFREQUENCYSCHEDULE_H

@protocol PFOperationSchedule;

#import <Foundation/Foundation.h>


@interface PFMaximumFrequencySchedule : NSObject <PFOperationSchedule>

 {
    ? interval;
}




-(BOOL)shouldExecuteOn:(id)arg0 previousExecution:(id)arg1 ;
-(id)init;
-(id)initWithFrequency:(NSInteger)arg0 ;
-(id)initWithInterval:(CGFloat)arg0 ;


@end


#endif