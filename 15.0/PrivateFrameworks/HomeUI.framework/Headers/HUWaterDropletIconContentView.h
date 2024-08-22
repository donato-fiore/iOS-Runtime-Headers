// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWATERDROPLETICONCONTENTVIEW_H
#define HUWATERDROPLETICONCONTENTVIEW_H

@class HFPrimaryStateIconDescriptor, UIImageView;


#import "HUIconContentView.h"

@interface HUWaterDropletIconContentView : HUIconContentView

@property (readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(NSInteger)renderingModeForSubview:(id)arg0 suggestedRenderingMode:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif