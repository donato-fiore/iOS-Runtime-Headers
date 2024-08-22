// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARIMAGEVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARIMAGEVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView; // ivar: _imageView


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_updatePlatterColor;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif