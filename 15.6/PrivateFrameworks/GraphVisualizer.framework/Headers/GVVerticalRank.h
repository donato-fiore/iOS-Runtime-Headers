// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GVVERTICALRANK_H
#define GVVERTICALRANK_H



#import "GVRank.h"

@interface GVVerticalRank : GVRank



-(CGFloat)height;
-(CGFloat)width;
-(id)initWithSeparation:(struct CGSize )arg0 ;
-(struct CGSize )sizeForDummy;
-(void)centerNode:(id)arg0 at:(CGFloat)arg1 ;
-(void)centerNodesWithRespectoTo:(id)arg0 ;


@end


#endif