// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSIOSCRATCHBUFFER_H
#define MTLTOOLSIOSCRATCHBUFFER_H

@class NSString;
@protocol MTLIOScratchBuffer, MTLBuffer;


#import "MTLToolsObject.h"

@interface MTLToolsIOScratchBuffer : MTLToolsObject <MTLIOScratchBuffer>



@property (readonly) NSObject<MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;


@end


#endif