// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT18AULABELEDMETERVIEW_H
#define _TTC12COREAUDIOKIT18AULABELEDMETERVIEW_H

@class UIView, NSString;



@interface _TtC12CoreAudioKit18AULabeledMeterView : UIView {
    ? peak;
    ? peakFaderTrigger;
    ? lastVoiceOverUpdate;
    ? peakTimer;
    ? margins;
    ? axis;
    ? meterLayer;
    ? fillLayer;
    ? peakLayer;
    ? lineLayers;
    ? labelLayers;
    ? label;
    ? meterLabelLayer;
}


@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) float level; // ivar: level
@property (nonatomic) BOOL vertical; // ivar: vertical


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithData:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)tintColorDidChange;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif