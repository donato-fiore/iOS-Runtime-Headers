// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMOVIESCRUBBEREDITINGVIEW_H
#define UIMOVIESCRUBBEREDITINGVIEW_H

@class NSArray;


#import "UIView.h"
#import "UIImageView.h"

@interface UIMovieScrubberEditingView : UIView {
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
}


@property (nonatomic) CGFloat edgeInset; // ivar: _edgeInset
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(BOOL)pointInsideLeftHandle:(struct CGPoint )arg0 ;
-(BOOL)pointInsideRightHandle:(struct CGPoint )arg0 ;
-(CGFloat)_bounceValueForFraction:(CGFloat)arg0 ;
-(id)_handleImages;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)handleForPoint:(struct CGPoint )arg0 hitOffset:(*CGFloat)arg1 ;
-(struct CGRect )_leftHandleRect;
-(struct CGRect )_rightHandleRect;
-(void)_updateHandleImages;
-(void)bounce;
-(void)layoutSubviews;


@end


#endif