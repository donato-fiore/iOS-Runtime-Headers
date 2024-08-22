// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRETRIALCOMPLETIONRESULT_H
#define PRETRIALCOMPLETIONRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface PRETrialCompletionResult : NSObject

@property (retain, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (nonatomic) BOOL isCompletionCalled; // ivar: _isCompletionCalled
@property (nonatomic) BOOL isSuccess; // ivar: _isSuccess




@end


#endif