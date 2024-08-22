// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BACKBOARDSCROLLEVENTSTREAM_H
#define BACKBOARDSCROLLEVENTSTREAM_H



#import "BaseScrollEventStream.h"

@interface BackBoardScrollEventStream : BaseScrollEventStream



-(void)addToBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)didAppendFinalEvent:(struct __IOHIDEvent *)arg0 ;
-(void)willAppendInitialEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif