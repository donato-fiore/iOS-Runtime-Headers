// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEXCLAMATIONACKNOWLEDGMENTGLYPHVIEW_H
#define CKEXCLAMATIONACKNOWLEDGMENTGLYPHVIEW_H



#import "CKAcknowledgmentGlyphView.h"
#import "CKAcknowledgmentGlyphImageView.h"

@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *leftExclamationGlyph; // ivar: _leftExclamationGlyph
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *rightExclamationGlyph; // ivar: _rightExclamationGlyph


-(CGFloat)animationDuration;
-(NSInteger)acknowledgmentType;
-(id)initWithFrame:(struct CGRect )arg0 color:(char)arg1 ;
-(struct CGPoint )glyphOffset;
-(void)animateWithBeginTime:(CGFloat)arg0 completionDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)setGlyphColor:(id)arg0 ;


@end


#endif