// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITASKSEVALUATIONRESULT_H
#define SIRITASKSEVALUATIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTasksEvaluationResult : NSObject

@property (nonatomic) BOOL isEffectiveTask; // ivar: _isEffectiveTask
@property (nonatomic) BOOL isSuccessfulTask; // ivar: _isSuccessfulTask
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSONData:(id)arg0 ;
-(id)initWithTaskId:(id)arg0 isEffectiveTask:(BOOL)arg1 isSuccessfulTask:(BOOL)arg2 ;
-(id)toJSON;


@end


#endif