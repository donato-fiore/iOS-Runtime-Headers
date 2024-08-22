// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __MNDEPARTURETIMESPENTCONDITION_H
#define __MNDEPARTURETIMESPENTCONDITION_H

@class NSDate;
@protocol __MNDepartureCondition;

#import <Foundation/Foundation.h>

#import "MNDepartureUpdater.h"

@interface __MNDepartureTimeSpentCondition : NSObject <__MNDepartureCondition>

 {
    MNDepartureUpdater *_updater;
    NSDate *_initialDate;
    CGFloat _threshold;
}




-(CGFloat)scoreForLocation:(id)arg0 ;
-(id)initWithUpdater:(id)arg0 timeThreshold:(CGFloat)arg1 ;


@end


#endif