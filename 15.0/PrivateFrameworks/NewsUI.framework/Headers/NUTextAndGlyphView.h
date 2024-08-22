// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUTEXTANDGLYPHVIEW_H
#define NUTEXTANDGLYPHVIEW_H

@class UIView, NSString, UIImageView, UILabel;
@protocol NUCrossFadeViewAnimatable;


#import "NUTextAndGlyph.h"

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable>



@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;
@property (retain, nonatomic) NUTextAndGlyph *textAndGlyph; // ivar: _textAndGlyph


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)nu_crossFadeViewClearVisibleState;
-(void)nu_crossFadeViewSetValue:(id)arg0 ;


@end


#endif