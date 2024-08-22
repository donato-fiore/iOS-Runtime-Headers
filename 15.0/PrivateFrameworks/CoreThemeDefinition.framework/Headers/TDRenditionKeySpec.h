// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDRENDITIONKEYSPEC_H
#define TDRENDITIONKEYSPEC_H

@class NSManagedObject;
@protocol TDElementAttributes;


#import "TDAppearance.h"
#import "TDThemeDirection.h"
#import "TDThemeElement.h"
#import "TDThemeDisplayGamut.h"
#import "TDThemeGlyphSize.h"
#import "TDThemeGlyphWeight.h"
#import "TDThemeGraphicsFeatureSetClass.h"
#import "TDThemeIdiom.h"
#import "TDThemeDrawingLayer.h"
#import "TDLocalization.h"
#import "TDThemePart.h"
#import "TDThemePresentationState.h"
#import "TDThemeState.h"
#import "TDThemeValue.h"
#import "TDThemeSize.h"
#import "TDThemeUISizeClass.h"
#import "TDThemeDeploymentTarget.h"

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>

 {
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    _renditionkeytoken _stackScratchKey;
    *_renditionkeytoken _scratchKey;
}


@property (retain, nonatomic) TDAppearance *appearance;
@property (retain, nonatomic) TDThemeDirection *direction;
@property (retain, nonatomic) TDThemeElement *element;
@property (retain, nonatomic) TDThemeDisplayGamut *gamut;
@property (retain, nonatomic) TDThemeGlyphSize *glyphSize;
@property (retain, nonatomic) TDThemeGlyphWeight *glyphWeight;
@property (retain, nonatomic) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass;
@property (retain, nonatomic) TDThemeIdiom *idiom;
@property (retain, nonatomic) TDThemeDrawingLayer *layer;
@property (retain, nonatomic) TDLocalization *localization;
@property (retain, nonatomic) TDThemePart *part;
@property (retain, nonatomic) TDThemePresentationState *presentationState;
@property (retain, nonatomic) TDThemeState *previousState;
@property (retain, nonatomic) TDThemeValue *previousValue;
@property (retain, nonatomic) TDThemeSize *size;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassHorizontal;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassVertical;
@property (retain, nonatomic) TDThemeState *state;
@property (retain, nonatomic) TDThemeDeploymentTarget *target;
@property (retain, nonatomic) TDThemeValue *value;


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(NSInteger)attributeCount;
-(id)copyDataFromAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataFromAttributes;
-(id)debugDescription;
-(id)keyDescription;
-(id)scaleFactorString;
-(struct _renditionkeyfmt *)keyFormat;
-(struct _renditionkeytoken *)key;
-(unsigned int)dimension1;
-(unsigned int)dimension2;
-(unsigned int)memoryClass;
-(unsigned int)nameIdentifier;
-(unsigned int)scaleFactor;
-(unsigned int)subtype;
-(void)copyAttributesInto:(id)arg0 ;
-(void)dealloc;
-(void)getKey:(struct _renditionkeytoken *)arg0 ;
-(void)setAttributesFromCopyData:(id)arg0 ;
-(void)setAttributesFromData:(id)arg0 ;
-(void)setAttributesFromRenditionKey:(struct _renditionkeytoken *)arg0 withDocument:(id)arg1 ;
-(void)setDimension1:(unsigned int)arg0 ;
-(void)setDimension2:(unsigned int)arg0 ;
-(void)setMemoryClass:(unsigned int)arg0 ;
-(void)setNameIdentifier:(unsigned int)arg0 ;
-(void)setScaleFactor:(unsigned int)arg0 ;
-(void)setScaleFactorString:(id)arg0 ;
-(void)setSubtype:(unsigned int)arg0 ;


@end


#endif