// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSEVENT_H
#define MTLTOOLSEVENT_H

@class NSString;
@protocol MTLEventSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsEvent : MTLToolsObject <MTLEventSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (nonatomic) BOOL enableBarrier;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;




@end


#endif