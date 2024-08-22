// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPQUERYJOB_H
#define SPQUERYJOB_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SPQueryResultsQueue.h"

@interface SPQueryJob : NSObject

@property (retain, nonatomic) NSString *dataclass; // ivar: _dataclass
@property (copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (weak, nonatomic) SPQueryResultsQueue *resultsQueue; // ivar: _resultsQueue
@property (nonatomic) *__SIJobRef siJob; // ivar: _siJob


// -(id)initWithSIJob:(struct __SIJobRef *)arg0 dataclass:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3  ;
-(void)cancel;
-(void)dealloc;


@end


#endif