// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLTRANSFORMS_H
#define BMDSLTRANSFORMS_H


#import <Foundation/Foundation.h>


@interface BMDSLTransforms : NSObject



+(id)allowedClasses;
+(id)allowedTransforms;
+(id)arrayTuplesToDictionary:(id)arg0 ;
+(id)durationForEventWithTimestamp:(id)arg0 isStart:(id)arg1 key:(id)arg2 keyName:(id)arg3 startEventsState:(id)arg4 metadata:(id)arg5 ;
+(id)durationForEventWithTimestamp:(id)arg0 isStart:(id)arg1 key:(id)arg2 startEventsState:(id)arg3 ;
+(id)firstEventOfDayWithEvent:(id)arg0 timestamp:(id)arg1 lastTimestampBuffer:(id)arg2 dayStartOffset:(id)arg3 ;


@end


#endif