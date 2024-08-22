// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMATERIAL_H
#define SSMATERIAL_H

@class CAFilter, UIColor;

#import <Foundation/Foundation.h>


@interface SSMaterial : NSObject {
    CAFilter *_filter;
    UIColor *_color;
}


@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) CGFloat colorAlpha;
@property (readonly, nonatomic) CAFilter *filter;


+(id)cropHandle;
+(id)vellumOpacitySliderTrack;
+(id)vellumOpacitySliderValueImage;
-(id)_initWithFilterType:(id)arg0 color:(id)arg1 ;
-(void)applyToView:(id)arg0 ;


@end


#endif