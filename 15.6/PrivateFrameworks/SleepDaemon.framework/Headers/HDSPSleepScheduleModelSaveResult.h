// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULEMODELSAVERESULT_H
#define HDSPSLEEPSCHEDULEMODELSAVERESULT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "HDSPSleepScheduleModelChangeEvaluation.h"

@interface HDSPSleepScheduleModelSaveResult : NSObject

@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // ivar: _changeEvaluation
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL shouldNotify; // ivar: _shouldNotify
@property (readonly, nonatomic) BOOL success; // ivar: _success


+(id)emptyResult;
+(id)saveFailedWithError:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 changeEvaluation:(id)arg1 error:(id)arg2 shouldNotify:(BOOL)arg3 ;


@end


#endif