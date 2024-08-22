// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTQUALITYVIEW_H
#define UIPRINTQUALITYVIEW_H



#import "UIView.h"
#import "UILabel.h"
#import "UIPrintQualityOption.h"
#import "UIPrintSegmentedSlider.h"

@interface UIPrintQualityView : UIView

@property (retain, nonatomic) UILabel *bestLabel; // ivar: _bestLabel
@property (retain, nonatomic) UILabel *draftLabel; // ivar: _draftLabel
@property (retain, nonatomic) UILabel *normalLabel; // ivar: _normalLabel
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption; // ivar: _qualityPrintOption
@property (retain, nonatomic) UIPrintSegmentedSlider *qualitySlider; // ivar: _qualitySlider


-(id)initWithFrame:(struct CGRect )arg0 qualityPrintOption:(id)arg1 ;
-(void)loadViews;
-(void)qualityChanged:(id)arg0 ;
-(void)updateQuality;


@end


#endif