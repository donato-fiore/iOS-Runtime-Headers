// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNANALYZERINFO_H
#define SNANALYZERINFO_H

@class NSError;
@protocol SNAnalyzerCreating, SNProcessing;

#import <Foundation/Foundation.h>

#import "SNAnalyzerHost.h"

@interface SNAnalyzerInfo : NSObject {
    BOOL _configured;
    id<SNAnalyzerCreating> *_request;
    id *_resultsHandler;
    id *_completionHandler;
    SNAnalyzerHost *_analyzerHost;
    id<SNProcessing> *_sharedProcessor;
    NSError *_configurationError;
}






@end


#endif