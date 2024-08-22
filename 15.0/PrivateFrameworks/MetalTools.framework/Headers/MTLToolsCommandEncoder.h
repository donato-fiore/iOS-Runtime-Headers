// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSCOMMANDENCODER_H
#define MTLTOOLSCOMMANDENCODER_H

@class NSString;
@protocol MTLCommandEncoder, MTLDevice;


#import "MTLToolsObject.h"
#import "MTLToolsCommandBuffer.h"

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>



@property (readonly, nonatomic) MTLToolsCommandBuffer *commandBuffer; // ivar: _commandBuffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(NSUInteger)globalTraceObjectID;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)addRetainedObject:(id)arg0 ;
-(void)endEncoding;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;


@end


#endif