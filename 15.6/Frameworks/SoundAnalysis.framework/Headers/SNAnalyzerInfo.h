// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNANALYZERINFO_H
#define SNANALYZERINFO_H

@class NSError;
@protocol SNAnalyzerCreating, SNProcessing;

#import <Foundation/Foundation.h>

#import "SNAnalyzerHost.h"

@interface SNAnalyzerInfo : NSObject

@property (retain, nonatomic) SNAnalyzerHost *analyzerHost; // ivar: _analyzerHost
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSError *configurationError; // ivar: _configurationError
@property (nonatomic) BOOL configured; // ivar: _configured
@property (retain, nonatomic) NSObject<SNAnalyzerCreating> *request; // ivar: _request
@property (copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (retain, nonatomic) NSObject<SNProcessing> *sharedProcessor; // ivar: _sharedProcessor




@end


#endif