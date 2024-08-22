// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREVIEWSCREENDONEBUTTON_H
#define PUREVIEWSCREENDONEBUTTON_H

@class UIButton;



@interface PUReviewScreenDoneButton : UIButton

@property (nonatomic) BOOL _needsUpdate; // ivar: __needsUpdate
@property (nonatomic) NSUInteger preferredStyle; // ivar: _preferredStyle
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


+(id)doneButton;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_updateIfNeeded;
-(void)layoutSubviews;


@end


#endif