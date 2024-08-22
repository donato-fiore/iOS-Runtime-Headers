// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSOURCENODE_H
#define BWSOURCENODE_H



#import "BWNode.h"

@interface BWSourceNode : BWNode

@property (readonly, nonatomic) *OpaqueCMClock clock;


-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)nodeType;
-(void)makeOutputsLiveIfNeeded;


@end


#endif