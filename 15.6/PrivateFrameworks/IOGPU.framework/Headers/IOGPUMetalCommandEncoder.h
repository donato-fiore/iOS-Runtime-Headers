// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALCOMMANDENCODER_H
#define IOGPUMETALCOMMANDENCODER_H

@class MTLCommandEncoder;



@interface IOGPUMetalCommandEncoder : MTLCommandEncoder



-(NSUInteger)globalTraceObjectID;
-(id)initWithCommandBuffer:(id)arg0 ;
-(void)endEncoding;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif