// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGEIMAGEVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGEIMAGEVIEW_H



#import "NTKRichComplicationCircularOpenGaugeContentView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *bottomImageView; // ivar: _bottomImageView


-(NSInteger)tritiumUpdateMode;
-(id)bottomView;
-(void)gaugeProvider:(*id)arg0 andCenterTextProvider:(*id)arg1 fromTemplate:(id)arg2 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif