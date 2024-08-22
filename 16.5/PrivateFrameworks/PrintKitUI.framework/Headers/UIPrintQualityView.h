// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTQUALITYVIEW_H
#define UIPRINTQUALITYVIEW_H

@class UIView, UILabel;


#import "UIPrintInfo.h"
#import "UIPrintSegmentedSlider.h"

@interface UIPrintQualityView : UIView

@property (retain, nonatomic) UILabel *bestLabel; // ivar: _bestLabel
@property (retain, nonatomic) UILabel *draftLabel; // ivar: _draftLabel
@property (retain, nonatomic) UILabel *normalLabel; // ivar: _normalLabel
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) UIPrintSegmentedSlider *qualitySlider; // ivar: _qualitySlider


-(id)initWithFrame:(struct CGRect )arg0 printInfo:(id)arg1 ;
-(void)changeQuality:(id)arg0 ;
-(void)dealloc;
-(void)loadViews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif