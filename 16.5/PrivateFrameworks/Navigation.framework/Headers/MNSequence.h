// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNSEQUENCE_H
#define MNSEQUENCE_H

@class NSMutableArray, geo_isolater;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNSequence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_steps;
    geo_isolater *_stepsIsolater;
}




-(id)initWithQueue:(id)arg0 ;
-(void)_runNextStepWithPreviousStepResult:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)start;


@end


#endif