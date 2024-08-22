// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSFUNCTIONHANDLE_H
#define MTLTOOLSFUNCTIONHANDLE_H

@class NSString;
@protocol MTLFunctionHandle, MTLDevice;


#import "MTLToolsObject.h"
#import "MTLToolsFunction.h"

@interface MTLToolsFunctionHandle : MTLToolsObject <MTLFunctionHandle>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) MTLToolsFunction *function; // ivar: _function
@property (readonly) NSUInteger functionType;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 function:(id)arg2 ;
-(void)dealloc;


@end


#endif