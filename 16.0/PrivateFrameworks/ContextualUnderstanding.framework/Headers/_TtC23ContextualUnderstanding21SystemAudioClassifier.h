// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC23CONTEXTUALUNDERSTANDING21SYSTEMAUDIOCLASSIFIER_H
#define _TTC23CONTEXTUALUNDERSTANDING21SYSTEMAUDIOCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface _TtC23ContextualUnderstanding21SystemAudioClassifier : NSObject {
    ? analysisQueue;
    ? soundAnalysisBiomeStream;
    ? audioEngine;
    ? analyzer;
    ? resultsObserver;
}




-(id)init;
-(void)handleAudioSessionInterruption:(id)arg0 ;


@end


#endif