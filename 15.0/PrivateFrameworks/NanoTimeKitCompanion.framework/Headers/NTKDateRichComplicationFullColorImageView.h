// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDATERICHCOMPLICATIONFULLCOLORIMAGEVIEW_H
#define NTKDATERICHCOMPLICATIONFULLCOLORIMAGEVIEW_H

@class UIView, CLKDevice, NSString, NSDate;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;


#import "NTKColoringLabel.h"

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView>

 {
    CLKDevice *_device;
    NSInteger _family;
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (readonly) Class superclass;


-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 family:(NSInteger)arg1 ;
-(void)_commonInit;
-(void)_timeChanged:(id)arg0 ;
-(void)_updateDate;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif