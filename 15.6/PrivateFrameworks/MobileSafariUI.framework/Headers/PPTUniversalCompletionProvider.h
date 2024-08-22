// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTUNIVERSALCOMPLETIONPROVIDER_H
#define PPTUNIVERSALCOMPLETIONPROVIDER_H

@class NSTimer, NSString;


#import "UniversalSearchCompletionProvider.h"

@interface PPTUniversalCompletionProvider : UniversalSearchCompletionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}




-(id)_generateResultsForString:(id)arg0 ;
-(id)_generateSingleResult;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif