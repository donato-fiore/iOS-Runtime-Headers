// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTEMPERATUREICONCONTENTVIEW_H
#define HUTEMPERATUREICONCONTENTVIEW_H

@class HFTemperatureIconDescriptor, NSString, UIFont;


#import "HUIconContentView.h"

@interface HUTemperatureIconContentView : HUIconContentView

@property (readonly, nonatomic) HFTemperatureIconDescriptor *iconDescriptor;
@property (retain, nonatomic) NSString *lastFontFittedText; // ivar: _lastFontFittedText
@property (nonatomic) CGFloat lastFontFittedWidth; // ivar: _lastFontFittedWidth
@property (retain, nonatomic) UIFont *lastFontFittingSize; // ivar: _lastFontFittingSize


-(BOOL)shouldFlipForRTL;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif