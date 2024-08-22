// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSOFTWAREUPDATEPROGRESSEVENT_H
#define HMSOFTWAREUPDATEPROGRESSEVENT_H

@class HMEEvent;


#import "HMSoftwareUpdateProgress.h"

@interface HMSoftwareUpdateProgressEvent : HMEEvent

@property (readonly) HMSoftwareUpdateProgress *progress; // ivar: _progress


-(id)encodedData;
-(id)initWithProgress:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif