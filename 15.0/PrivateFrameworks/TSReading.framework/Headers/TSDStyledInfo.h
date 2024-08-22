// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSTYLEDINFO_H
#define TSDSTYLEDINFO_H

@class NSString;
@protocol TSSStyleClient;


#import "TSDDrawableInfo.h"
#import "TSDReflection.h"
#import "TSDShadow.h"
#import "TSDStroke.h"
#import "TSSStyle.h"

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float opacity;
@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly) Class superclass;


-(id)boxedValueForProperty:(int)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)propertyMapForNewPreset;
-(id)referencedStyles;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)i_setValue:(id)arg0 forProperty:(int)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)setBoxedValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif