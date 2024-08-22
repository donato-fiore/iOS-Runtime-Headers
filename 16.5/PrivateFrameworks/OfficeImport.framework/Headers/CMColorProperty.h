// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCOLORPROPERTY_H
#define CMCOLORPROPERTY_H



#import "CMProperty.h"
#import "OITSUColor.h"

@interface CMColorProperty : CMProperty {
    OITSUColor *wdValue;
}




+(float)resolveColorValueWithPercentage:(float)arg0 foregroundComponent:(float)arg1 backgroundComponent:(float)arg2 ;
+(float)transformedAlphaFromOADColor:(id)arg0 ;
+(id)cssStringFromOADColor:(id)arg0 ;
+(id)cssStringFromOADGradientFill:(id)arg0 state:(id)arg1 ;
+(id)cssStringFromRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
+(id)cssStringFromTSUColor:(id)arg0 ;
+(id)nsColorFromOADColor:(id)arg0 state:(id)arg1 ;
+(id)nsColorFromOADFill:(id)arg0 state:(id)arg1 ;
+(id)nsColorFromShading:(id)arg0 ;
+(id)resolveStyleColorWithPercentage:(float)arg0 foregroundColor:(id)arg1 backgroundColor:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg0 shading:(id)arg1 ;
+(struct CGColor *)copyCGColorFromOADColor:(id)arg0 state:(id)arg1 ;
+(struct CGColor *)copyCGColorFromOADFill:(id)arg0 state:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(id)cssString;
-(id)cssStringForName:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)value;


@end


#endif