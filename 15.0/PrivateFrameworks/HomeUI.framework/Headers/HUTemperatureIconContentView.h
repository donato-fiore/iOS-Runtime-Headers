// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTEMPERATUREICONCONTENTVIEW_H
#define HUTEMPERATUREICONCONTENTVIEW_H

@class HFTemperatureIconDescriptor;


#import "HUIconContentView.h"

@interface HUTemperatureIconContentView : HUIconContentView

@property (readonly, nonatomic) HFTemperatureIconDescriptor *iconDescriptor;


-(BOOL)shouldFlipForRTL;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif