// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT18AULIMITERGRAPHVIEW_H
#define _TTC12COREAUDIOKIT18AULIMITERGRAPHVIEW_H

@class UIView;



@interface _TtC12CoreAudioKit18AULimiterGraphView : UIView {
    ? levels;
    ? lines;
    ? peaks;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addWithLevel:(CGFloat)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif