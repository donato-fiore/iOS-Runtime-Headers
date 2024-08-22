// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCORNERCIRCULARIMAGEVIEW_H
#define NTKRICHCOMPLICATIONCORNERCIRCULARIMAGEVIEW_H

@class CDRichComplicationCornerBaseCircularView;


#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationCornerCircularImageView : CDRichComplicationCornerBaseCircularView {
    NTKRichComplicationImageView *_imageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)_circularView;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)_updatePlatterColor;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif