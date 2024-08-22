// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IFGRAPHICSYMBOLDESCRIPTOR_H
#define IFGRAPHICSYMBOLDESCRIPTOR_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying;


#import "IFSymbolImageDescriptor.h"

@interface IFGraphicSymbolDescriptor : IFSymbolImageDescriptor <NSCopying>



@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (nonatomic) NSInteger contrast; // ivar: _contrast
@property (nonatomic) BOOL debugColourSet; // ivar: _debugColourSet
@property (copy, nonatomic) NSArray *enclosureColors; // ivar: _enclosureColors
@property (nonatomic) NSInteger enclosureEffect; // ivar: _enclosureEffect
@property (nonatomic) NSInteger fill; // ivar: _fill
@property (nonatomic) BOOL flipXOffsetOverride; // ivar: _flipXOffsetOverride
@property (retain) NSString *name; // ivar: _name
@property (nonatomic) NSInteger renderingMode; // ivar: _renderingMode
@property (copy, nonatomic) NSArray *resolvedEnclosureColors; // ivar: _resolvedEnclosureColors
@property (nonatomic) NSInteger resolvedEnclosureEffect; // ivar: _resolvedEnclosureEffect
@property (nonatomic) NSInteger resolvedFill; // ivar: _resolvedFill
@property (retain, nonatomic) NSString *resolvedName; // ivar: _resolvedName
@property (nonatomic) NSInteger resolvedShape; // ivar: _resolvedShape
@property (copy, nonatomic) NSArray *resolvedSymbolColors; // ivar: _resolvedSymbolColors
@property (nonatomic) NSInteger resolvedSymbolEffect; // ivar: _resolvedSymbolEffect
@property (nonatomic) NSInteger shape; // ivar: _shape
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSArray *symbolColors; // ivar: _symbolColors
@property (nonatomic) NSInteger symbolEffect; // ivar: _symbolEffect
@property (nonatomic) CGSize symbolOffset; // ivar: _symbolOffset
@property (readonly, copy, nonatomic) NSDictionary *symbolOverrides;
@property (nonatomic) NSInteger vibrancy; // ivar: _vibrancy


+(id)overrides;
-(BOOL)_isDebugGraphicIconColourEnabled;
-(CGFloat)_overridesPointSizeToShapeMultiplier;
-(CGFloat)pointSize;
-(NSInteger)resolvedRenderingModeFromSuggestedMode:(NSInteger)arg0 ;
-(NSInteger)symbolWeight;
-(NSUInteger)symbolSize;
-(id)_colorForIFSystemColor:(NSInteger)arg0 ;
-(id)_debugDynamicGraphicIconColor;
-(id)_defaultEnclosureColor;
-(id)_defaultSymbolColor;
-(id)_overridesShapeStringForShape;
-(id)_resolvedColorsForColors:(id)arg0 defaultColor:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif