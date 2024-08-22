// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFREERESOURCESINSTRUCTIONLABEL_H
#define CAMFREERESOURCESINSTRUCTIONLABEL_H



#import "CAMInstructionLabel.h"

@interface CAMFreeResourcesInstructionLabel : CAMInstructionLabel

@property (nonatomic) NSUInteger freeResourceInstructionState; // ivar: _freeResourceInstructionState


-(BOOL)_wantsPrefixActivityIndicatorView;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_backgroundAlpha;
-(id)_symbolSuffixName;
-(id)_textColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_textInsets;
-(void)_updateText;


@end


#endif