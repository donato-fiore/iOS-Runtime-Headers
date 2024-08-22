// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DDATABUFFERRESOURCE_H
#define TSCH3DDATABUFFERRESOURCE_H



#import "TSCH3DResource.h"

@interface TSCH3DDataBufferResource : TSCH3DResource



+(id)resource;
+(id)resourceWithBuffer:(id)arg0 ;
-(id)buffer;
-(id)description;
-(id)get;
-(id)initWithBuffer:(id)arg0 ;
-(void)clear;
-(void)flushMemory;
-(void)setBuffer:(id)arg0 ;
-(void)setChanged:(BOOL)arg0 ;


@end


#endif