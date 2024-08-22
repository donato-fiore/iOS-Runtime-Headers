// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKQUESTIONACKNOWLEDGMENTGLYPHVIEW_H
#define CKQUESTIONACKNOWLEDGMENTGLYPHVIEW_H



#import "CKAcknowledgmentGlyphView.h"
#import "CKAcknowledgmentGlyphImageView.h"

@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *dot; // ivar: _dot
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph; // ivar: _glyph


-(CGFloat)animationDuration;
-(NSInteger)acknowledgmentType;
-(id)initWithFrame:(struct CGRect )arg0 color:(char)arg1 ;
-(void)animateWithBeginTime:(CGFloat)arg0 completionDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif