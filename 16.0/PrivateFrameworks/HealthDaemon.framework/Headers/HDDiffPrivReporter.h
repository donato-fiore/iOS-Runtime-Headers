// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDIFFPRIVREPORTER_H
#define HDDIFFPRIVREPORTER_H

@class _DPStringRecorder;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDDiffPrivReporter : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _DPStringRecorder *_recorder;
}




+(BOOL)isAvailable;
+(id)reportableTypes;
-(BOOL)reportWithCurrentDate:(id)arg0 error:(*id)arg1 ;
-(id)_typesInMonthWithDataForTypes:(id)arg0 now:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif