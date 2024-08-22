// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDATERICHCOMPLICATIONCORNERVIEW_H
#define NTKDATERICHCOMPLICATIONCORNERVIEW_H

@class NSDate, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationCornerView.h"
#import "NTKCurvedColoringLabel.h"
#import "NTKCurvedRoundedRectShapeLayer.h"

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <CLKMonochromeComplicationView>

 {
    NTKCurvedColoringLabel *_weekdayLabel;
    NTKCurvedColoringLabel *_previousDateLabel;
    NTKCurvedColoringLabel *_dateLabel;
    NTKCurvedColoringLabel *_nextDateLabel;
    NTKCurvedRoundedRectShapeLayer *_previousDatePlatter;
    NTKCurvedRoundedRectShapeLayer *_datePlatter;
    NTKCurvedRoundedRectShapeLayer *_nextDatePlatter;
    NSDate *_overrideDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createAndAddColoringLabelWithFontSize:(CGFloat)arg0 dayOffset:(NSInteger)arg1 ;
-(id)_createAndAddLabelPlatterWithAngularWidth:(CGFloat)arg0 color:(id)arg1 ;
-(id)init;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_timeChanged:(id)arg0 ;
-(void)_updateDate;
-(void)dealloc;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif