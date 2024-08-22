// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENGLISHHAACKNOWLEDGMENTGLYPHVIEW_H
#define CKENGLISHHAACKNOWLEDGMENTGLYPHVIEW_H



#import "CKAcknowledgmentGlyphView.h"
#import "CKAcknowledgmentGlyphImageView.h"

@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a1; // ivar: _a1
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a2; // ivar: _a2
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h1; // ivar: _h1
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h2; // ivar: _h2


-(CGFloat)animationDuration;
-(NSInteger)acknowledgmentType;
-(id)initWithFrame:(struct CGRect )arg0 color:(char)arg1 ;
-(struct CGPoint )glyphOffset;
-(void)animateWithBeginTime:(CGFloat)arg0 completionDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)setGlyphColor:(id)arg0 ;


@end


#endif