// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTHUMBSDOWNACKNOWLEDGMENTGLYPHVIEW_H
#define CKTHUMBSDOWNACKNOWLEDGMENTGLYPHVIEW_H

@class CALayer;


#import "CKSimpleAcknowledgementGlyphView.h"

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView

@property (retain, nonatomic) CALayer *animationLayer; // ivar: _animationLayer
@property (retain, nonatomic) CALayer *contentLayer; // ivar: _contentLayer


-(CGFloat)animationDuration;
-(NSInteger)acknowledgmentType;
-(void)animateWithBeginTime:(CGFloat)arg0 completionDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)setGlyphColor:(id)arg0 ;


@end


#endif