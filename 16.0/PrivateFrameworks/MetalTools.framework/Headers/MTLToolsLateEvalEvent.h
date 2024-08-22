// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSLATEEVALEVENT_H
#define MTLTOOLSLATEEVALEVENT_H

@class NSString;
@protocol MTLLateEvalEvent, MTLDevice;


#import "MTLToolsSharedEvent.h"

@interface MTLToolsLateEvalEvent : MTLToolsSharedEvent <MTLLateEvalEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property NSUInteger signaledValue;
@property (readonly) Class superclass;




@end


#endif