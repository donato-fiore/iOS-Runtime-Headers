// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSIOSCRATCHBUFFERALLOCATOR_H
#define MTLTOOLSIOSCRATCHBUFFERALLOCATOR_H

@class NSString;
@protocol MTLIOScratchBufferAllocator;


#import "MTLToolsObject.h"

@interface MTLToolsIOScratchBufferAllocator : MTLToolsObject <MTLIOScratchBufferAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)newScratchBufferWithMinimumSize:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif