// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCWINDOBSERVATIONSBASEVIEW_H
#define NWCWINDOBSERVATIONSBASEVIEW_H

@class UIView, NSString, CLKDevice, UIFontDescriptor, UILabel;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;



@interface NWCWindObservationsBaseView : UIView <CLKFullColorImageView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *windDirectionAbbreviationLabel; // ivar: _windDirectionAbbreviationLabel
@property (retain, nonatomic) UILabel *windSpeedLabel; // ivar: _windSpeedLabel
@property (retain, nonatomic) UILabel *windUnitLabel; // ivar: _windUnitLabel


-(NSInteger)supportedComplicationFamily;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(void)_applyConstraintsWithLayoutConstants:(struct ? )arg0 ;
-(void)_processWindSpeed:(id)arg0 unit:(id)arg1 directionAbbreviation:(id)arg2 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif