// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCORNERTEXTIMAGEVIEW_H
#define NTKRICHCOMPLICATIONCORNERTEXTIMAGEVIEW_H



#import "NTKRichComplicationCornerTextCustomView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationCornerTextImageView : NTKRichComplicationCornerTextCustomView {
    NTKRichComplicationImageView *_imageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)_outerView;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif