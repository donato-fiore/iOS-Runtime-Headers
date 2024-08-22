// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPRESSGLYPHVIEW_H
#define PKEXPRESSGLYPHVIEW_H

@class UIView, PKGlyphView, NSString;
@protocol PKGlyphViewDelegate, PKExpressGlyphViewDelegate;



@interface PKExpressGlyphView : UIView <PKGlyphViewDelegate>

 {
    int _state;
    CGFloat _maximumLength;
    PKGlyphView *_glyphView;
    id<PKExpressGlyphViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)glyphView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif