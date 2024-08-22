// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSCROLLVIEWIMPRESSIONSCALCULATOR_H
#define MUSCROLLVIEWIMPRESSIONSCALCULATOR_H

@protocol MUVisibleItemsProvider;


#import "MUImpressionsCalculator.h"

@interface MUScrollViewImpressionsCalculator : MUImpressionsCalculator {
    id<MUVisibleItemsProvider> *_visibleItemsProvider;
}




-(id)initWithConfiguration:(id)arg0 visibleItemsProvider:(id)arg1 ;
-(void)logImpressions;


@end


#endif