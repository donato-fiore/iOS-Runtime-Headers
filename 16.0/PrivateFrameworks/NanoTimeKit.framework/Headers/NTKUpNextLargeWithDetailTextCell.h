// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTLARGEWITHDETAILTEXTCELL_H
#define NTKUPNEXTLARGEWITHDETAILTEXTCELL_H

@class UILayoutGuide, CLKUIColoringLabel, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"
#import "NTKUpNextImageView.h"

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>

 {
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_bodyImage;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_bodyLabel;
    CLKUIColoringLabel *_detail1Label;
    CLKUIColoringLabel *_detail2Label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif