// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELCOMMANDENCODER_H
#define MTLIOACCELCOMMANDENCODER_H

@class MTLCommandEncoder;



@interface MTLIOAccelCommandEncoder : MTLCommandEncoder



-(NSUInteger)globalTraceObjectID;
-(id)initWithCommandBuffer:(id)arg0 ;
-(void)endEncoding;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif