// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSCOUNTERSAMPLEBUFFER_H
#define MTLTOOLSCOUNTERSAMPLEBUFFER_H

@class NSString;
@protocol MTLCounterSampleBuffer, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label;
@property (readonly) NSUInteger sampleCount;
@property (readonly) Class superclass;


-(id)resolveCounterRange:(struct _NSRange )arg0 ;


@end


#endif