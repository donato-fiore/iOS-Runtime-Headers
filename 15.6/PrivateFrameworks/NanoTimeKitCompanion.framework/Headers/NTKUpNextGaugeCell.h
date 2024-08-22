// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTGAUGECELL_H
#define NTKUPNEXTGAUGECELL_H

@class UILayoutGuide, CLKFont, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationLineProgressView.h"

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>

 {
    UILayoutGuide *_contentLayoutGuide;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKRichComplicationLineProgressView *_progressView;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_boldFont;
    CLKFont *_semiboldFont;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif