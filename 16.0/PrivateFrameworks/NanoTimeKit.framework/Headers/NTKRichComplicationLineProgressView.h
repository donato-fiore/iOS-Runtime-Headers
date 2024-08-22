// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONLINEPROGRESSVIEW_H
#define NTKRICHCOMPLICATIONLINEPROGRESSVIEW_H

@class CDRichComplicationProgressView;



@interface NTKRichComplicationLineProgressView : CDRichComplicationProgressView

@property (readonly, nonatomic) NSInteger progressFillStyle; // ivar: _progressFillStyle


-(id)initForFamily:(NSInteger)arg0 device:(id)arg1 progressFillStyle:(NSInteger)arg2 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 locations:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif