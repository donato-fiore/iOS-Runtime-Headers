// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSHAPESTYLE_H
#define TSWPSHAPESTYLE_H

@class NSString;
@protocol TSSPreset;


#import "TSDShapeStyle.h"

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>



@property (readonly, nonatomic) NSString *presetKind;


+(id)defaultValueForProperty:(int)arg0 ;
+(id)layoutProperties;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(SEL)mapThemePropertyMapSelector;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)defaultParagraphStyle;
-(void)setDefaultParagraphStyle:(id)arg0 ;


@end


#endif