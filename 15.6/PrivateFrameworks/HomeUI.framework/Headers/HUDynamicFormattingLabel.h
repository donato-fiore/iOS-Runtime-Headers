// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDYNAMICFORMATTINGLABEL_H
#define HUDYNAMICFORMATTINGLABEL_H

@class UILabel, NSDictionary, UIFont, NSArray;
@protocol HFDynamicFormattingValue, NACancelable;



@interface HUDynamicFormattingLabel : UILabel

@property (copy, nonatomic) NSDictionary *defaultAttributes; // ivar: _defaultAttributes
@property (retain, nonatomic) NSObject<HFDynamicFormattingValue> *dynamicFormattingValue; // ivar: _dynamicFormattingValue
@property (retain, nonatomic) NSObject<NACancelable> *formattedValueObservationCancellationToken; // ivar: _formattedValueObservationCancellationToken
@property (retain, nonatomic) UIFont *preferredFontForCurrentSize; // ivar: _preferredFontForCurrentSize
@property (copy, nonatomic) NSArray *preferredFonts; // ivar: _preferredFonts


-(id)_formattedValueWithFont:(id)arg0 ;
-(void)_updateFormattedValueIncludingFont:(BOOL)arg0 ;
-(void)_updateFormattedValueObservation;
-(void)_updatePreferredFontIncludingValue:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif