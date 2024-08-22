// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSTYLEDINFO_H
#define TSDSTYLEDINFO_H

@class NSString, NSSet, TSSStyle, NSArray;
@protocol TSDStyleOwning, TSSStyleClient;


#import "TSDDrawableInfo.h"
#import "TSDReflection.h"
#import "TSDShadow.h"
#import "TSDStroke.h"

@interface TSDStyledInfo : TSDDrawableInfo <TSDStyleOwning, TSSStyleClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) BOOL pathIsOpen;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) NSString *styleIdentifierTemplateForNewPreset;
@property (readonly, nonatomic) NSArray *stylesForCopyStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsStyleInspecting;


-(BOOL)isSelectable;
-(id)boxedValueForProperty:(int)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)pastedPropertyMapForStyle:(id)arg0 tailLineEndInfo:(int)arg1 ;
-(id)propertyMapForNewPreset;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)i_setValue:(id)arg0 forProperty:(int)arg1 ;
-(void)i_setValue:(id)arg0 forProperty:(int)arg1 inStylesheet:(id)arg2 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)setBoxedValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setValuesForProperties:(id)arg0 ;


@end


#endif