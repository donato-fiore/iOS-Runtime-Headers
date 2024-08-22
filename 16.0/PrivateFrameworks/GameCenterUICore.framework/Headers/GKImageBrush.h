// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKIMAGEBRUSH_H
#define GKIMAGEBRUSH_H



#import "GKThemeBrush.h"

@interface GKImageBrush : GKThemeBrush

@property (copy, nonatomic) id *inputTransform; // ivar: _inputTransform


-(CGFloat)scaleForInput:(id)arg0 ;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif