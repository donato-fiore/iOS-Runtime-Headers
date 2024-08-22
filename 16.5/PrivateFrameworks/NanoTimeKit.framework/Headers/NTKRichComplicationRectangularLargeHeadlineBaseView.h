// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARLARGEHEADLINEBASEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARLARGEHEADLINEBASEVIEW_H

@class CDComplicationHostingView, CLKUIColoringLabel;


#import "NTKRichComplicationRectangularBaseView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView *_headerImageView;
    CDComplicationHostingView *_headerSwiftUIView;
    CLKUIColoringLabel *_headerLabel;
}




+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)init;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_updateTemplateHeaderWithTextProvider:(id)arg0 imageProvider:(id)arg1 viewData:(id)arg2 reason:(NSInteger)arg3 ;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif