// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSFENCE_H
#define MTLTOOLSFENCE_H

@class NSString;
@protocol MTLFence, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsFence : MTLToolsObject <MTLFence>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;




@end


#endif