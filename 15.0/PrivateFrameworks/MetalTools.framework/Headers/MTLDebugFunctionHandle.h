// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGFUNCTIONHANDLE_H
#define MTLDEBUGFUNCTIONHANDLE_H

@class NSString;
@protocol MTLFunctionHandle, MTLDevice;


#import "MTLToolsFunctionHandle.h"

@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandle>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger functionType;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) NSUInteger stage; // ivar: _stage
@property (readonly) Class superclass;


-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 function:(id)arg2 stage:(NSUInteger)arg3 ;


@end


#endif