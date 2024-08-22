// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUPNEXTRICHCOMPLICATIONBEZELCONFIGURATION_H
#define NTKUPNEXTRICHCOMPLICATIONBEZELCONFIGURATION_H

@class UIImage;


#import "NTKUpNextComplicationConfiguration.h"

@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration

@property (readonly, nonatomic) UIImage *maskImage; // ivar: _maskImage
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaskImage:(id)arg0 radius:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif