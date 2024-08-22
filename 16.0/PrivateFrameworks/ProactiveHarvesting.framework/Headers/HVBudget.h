// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVBUDGET_H
#define HVBUDGET_H


#import <Foundation/Foundation.h>


@interface HVBudget : NSObject {
    unsigned int _alwaysAllowSourcesOverride;
    unsigned int _alwaysDenySourcesOverride;
    unsigned int _noServiceSources;
    unsigned int _neverUseBatterySources;
    unsigned int _delayedBudgetedSources;
    unsigned int _budgetedSources;
    unsigned int _realtimeSources;
}




-(id)init;


@end


#endif