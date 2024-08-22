// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFRGBCOLOR_H
#define HFRGBCOLOR_H

@class UIColor, NSString;
@protocol HFColorPrimitive, NSCopying;

#import <Foundation/Foundation.h>


@interface HFRGBColor : NSObject <HFColorPrimitive, NSCopying>



@property (readonly, copy, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) float blue; // ivar: _blue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float green; // ivar: _green
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float red; // ivar: _red
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hf_RGBColorRepresentation;
-(id)init;
-(id)initWithHue:(float)arg0 saturation:(float)arg1 brightness:(float)arg2 ;
-(id)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)valueDescription;
-(void)getHue:(*float)arg0 saturation:(*float)arg1 brightness:(*float)arg2 ;


@end


#endif