// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBSPLITIMAGEVIEW_H
#define UIKBSPLITIMAGEVIEW_H

@class NSArray, NSLayoutConstraint, NSString;


#import "UIView.h"
#import "UIImageView.h"

@interface UIKBSplitImageView : UIView {
    BOOL _canStretchAsFullWidth;
    UIImageView *_fullView;
    UIImageView *_splitLeft;
    UIImageView *_splitRight;
    NSArray *_splitConstraints;
    NSLayoutConstraint *_leftWidthConstraint;
    NSLayoutConstraint *_rightWidthConstraint;
}


@property (retain, nonatomic) NSString *filterType; // ivar: _currentFilterType


-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(id)initWithFrame:(struct CGRect )arg0 canStretchAsFullWidth:(BOOL)arg1 ;
-(void)clearImages;
-(void)insertSubviewAtBottom:(id)arg0 ;
-(void)prepareForDisplay:(BOOL)arg0 ;
-(void)setContentsMultiplyColor:(id)arg0 ;
-(void)setImage:(id)arg0 cachedWidth:(CGFloat)arg1 keyplane:(id)arg2 ;
-(void)setImage:(id)arg0 splitLeft:(id)arg1 splitRight:(id)arg2 keyplane:(id)arg3 ;


@end


#endif