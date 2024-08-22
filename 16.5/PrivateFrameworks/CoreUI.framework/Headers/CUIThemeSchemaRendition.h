// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUITHEMESCHEMARENDITION_H
#define CUITHEMESCHEMARENDITION_H

@class NSDictionary;


#import "CUIThemeRendition.h"
#import "CUIPSDGradient.h"

@interface CUIThemeSchemaRendition : CUIThemeRendition {
    NSDictionary *cuiInfo;
    NSUInteger _nimages;
    ? _image;
    CGRect _layoutRects;
    CGSize _intrinsicSize;
    CGRect _elementRect;
    NSInteger _columnSlices;
    NSInteger _rowSlices;
    ? _contentInsets;
    CUIPSDGradient *_gradient;
}


@property (readonly, nonatomic) CUIPSDGradient *gradient;
@property (readonly, nonatomic) NSUInteger numberOfSlices;
@property (readonly, nonatomic) *CGRect sliceRects;


-(CGFloat)scale;
-(NSInteger)columnSlices;
-(NSInteger)rowSlices;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(id)description;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)directionLocalizedString;
-(id)drawingLayerLocalizedString;
-(id)initWithCoreUIOptions:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)presentationStateLocalizedString;
-(id)previousStateLocalizedString;
-(id)previousValueLocalizedString;
-(id)referenceImage;
-(id)scaleLocalizedString;
-(id)sizeLocalizedString;
-(id)slices;
-(id)stateLocalizedString;
-(id)stringForState:(unsigned short)arg0 ;
-(id)stringForValue:(unsigned short)arg0 ;
-(id)typeLocalizedString;
-(id)valueLocalizedString;
-(struct ? )contentInsets;
-(struct CGPoint )renditionCoordinatesForPartFeatures:(NSInteger)arg0 ;
-(struct CGRect )alignmentRectangle;
-(struct CGRect )edgeInsets:(BOOL)arg0 ;
-(unsigned short)appearance;
-(unsigned short)dimension1;
-(unsigned short)dimension2;
-(unsigned short)direction;
-(unsigned short)drawingLayer;
-(unsigned short)identifier;
-(unsigned short)keyScale;
-(unsigned short)layer;
-(unsigned short)localization;
-(unsigned short)presentationState;
-(unsigned short)previousState;
-(unsigned short)previousValue;
-(unsigned short)size;
-(unsigned short)state;
-(unsigned short)value;
-(void)dealloc;


@end


#endif