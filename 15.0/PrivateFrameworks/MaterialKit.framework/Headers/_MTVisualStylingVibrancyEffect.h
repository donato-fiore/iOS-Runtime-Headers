// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTVISUALSTYLINGVIBRANCYEFFECT_H
#define _MTVISUALSTYLINGVIBRANCYEFFECT_H

@class UIVibrancyEffect;


#import "MTVisualStyling.h"

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect

@property (readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling; // ivar: _visualStyling


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectConfig;
-(id)effectConfigForQuality:(NSInteger)arg0 ;
-(id)effectForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVisualStyling:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif