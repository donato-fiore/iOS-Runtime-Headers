// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENMETEREDGAUGEIMAGEVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENMETEREDGAUGEIMAGEVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationImageView.h"
#import "NTKRichComplicationCurvedProgressView.h"
#import "NTKColoringLabel.h"

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationImageView *centerImageView; // ivar: _centerImageView
@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) NTKColoringLabel *smallLabel; // ivar: _smallLabel


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(NSInteger)progressFillStyle;
-(NSInteger)tritiumUpdateMode;
-(id)initWithFamily:(NSInteger)arg0 ;
-(struct ? )_layoutConstraintsWithDevice:(id)arg0 family:(NSInteger)arg1 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif