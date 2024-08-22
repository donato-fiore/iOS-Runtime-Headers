// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSIMPLEACKNOWLEDGEMENTGLYPHVIEW_H
#define CKSIMPLEACKNOWLEDGEMENTGLYPHVIEW_H



#import "CKAcknowledgmentGlyphView.h"
#import "CKAcknowledgmentGlyphImageView.h"

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph; // ivar: _glyph


-(CGFloat)animationDuration;
-(id)glyphImageForType:(NSInteger)arg0 color:(char)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 color:(char)arg1 ;
-(void)layoutSubviews;


@end


#endif