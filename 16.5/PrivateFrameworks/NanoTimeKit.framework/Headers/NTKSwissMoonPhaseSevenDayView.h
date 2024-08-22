// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSWISSMOONPHASESEVENDAYVIEW_H
#define NTKSWISSMOONPHASESEVENDAYVIEW_H

@class UIView, NSArray, NSString, UIFontDescriptor, UIStackView;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;



@interface NTKSwissMoonPhaseSevenDayView : UIView <CLKFullColorImageView>



@property (retain, nonatomic) NSArray *dailyViews; // ivar: _dailyViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dividerViews; // ivar: _dividerViews
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *sevenDayLayoutView; // ivar: _sevenDayLayoutView
@property (readonly) Class superclass;


-(NSInteger)_labelFilterStyle;
-(NSInteger)_moonFilterStyle;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif