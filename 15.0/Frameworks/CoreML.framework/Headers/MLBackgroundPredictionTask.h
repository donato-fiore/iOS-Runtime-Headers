// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLBACKGROUNDPREDICTIONTASK_H
#define MLBACKGROUNDPREDICTIONTASK_H

@class NSURL;


#import "MLBackgroundTask.h"
#import "MLModelConfiguration.h"
#import "MLPredictionOptions.h"

@interface MLBackgroundPredictionTask : MLBackgroundTask

@property (copy, nonatomic) MLModelConfiguration *modelConfiguration; // ivar: _modelConfiguration
@property (copy, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (copy, nonatomic) MLPredictionOptions *predictionOptions; // ivar: _predictionOptions


+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif