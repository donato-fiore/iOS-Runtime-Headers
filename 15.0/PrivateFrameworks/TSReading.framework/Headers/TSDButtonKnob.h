// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBUTTONKNOB_H
#define TSDBUTTONKNOB_H

@class TSUImage;


#import "TSDKnob.h"

@interface TSDButtonKnob : TSDKnob

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: mEnabled
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: mHighlighted
@property (retain, nonatomic) TSUImage *image; // ivar: mImage


-(BOOL)isHitByUnscaledPoint:(struct CGPoint )arg0 andRep:(id)arg1 returningDistance:(*CGFloat)arg2 ;
-(id)initWithImage:(id)arg0 tag:(NSUInteger)arg1 onRep:(id)arg2 ;
-(id)initWithType:(int)arg0 position:(struct CGPoint )arg1 radius:(CGFloat)arg2 tag:(NSUInteger)arg3 onRep:(id)arg4 ;
-(id)knobImage;
-(void)dealloc;
-(void)p_updateLayerImage;


@end


#endif