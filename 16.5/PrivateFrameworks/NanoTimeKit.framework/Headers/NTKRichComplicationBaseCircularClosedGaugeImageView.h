// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGEIMAGEVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGEIMAGEVIEW_H



#import "NTKRichComplicationCircularClosedGaugeContentView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView; // ivar: _imageView


-(NSInteger)tritiumUpdateMode;
-(id)gaugeProviderFromTemplate:(id)arg0 ;
-(id)innerView;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif