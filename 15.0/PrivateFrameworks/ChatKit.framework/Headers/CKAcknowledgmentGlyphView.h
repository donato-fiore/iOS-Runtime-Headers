// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACKNOWLEDGMENTGLYPHVIEW_H
#define CKACKNOWLEDGMENTGLYPHVIEW_H

@class UIView, UIColor;



@interface CKAcknowledgmentGlyphView : UIView

@property (readonly, nonatomic) NSInteger acknowledgmentType;
@property (readonly, nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (readonly, nonatomic) CGPoint glyphOffset; // ivar: _glyphOffset


+(id)glyphViewForAcknowledgmentType:(NSInteger)arg0 glyphColor:(char)arg1 ;
+(id)viewCache;
+(void)cacheGlyphView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 color:(char)arg1 ;
-(void)animateWithBeginTime:(CGFloat)arg0 completionDelay:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif