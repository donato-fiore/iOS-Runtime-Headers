// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDNAMEDASSETIMPORTINFO_H
#define TDNAMEDASSETIMPORTINFO_H

@class NSString, NSArray, NSURL, NSValue, NSDate, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TDNamedAssetImportInfo : NSObject <NSCopying>



@property (nonatomic) CGRect alignmentRect; // ivar: _alignmentRect
@property (nonatomic) NSInteger appearanceIdentifier; // ivar: _appearanceIdentifier
@property (copy, nonatomic) NSString *appearanceName; // ivar: _appearanceName
@property (nonatomic) NSUInteger arrayIndex; // ivar: _arrayIndex
@property (nonatomic) short autoscalingType; // ivar: _autoscalingType
@property (copy, nonatomic) NSArray *backgroundColorComponents; // ivar: _backgroundColorComponents
@property (copy, nonatomic) NSString *backgroundColorName; // ivar: _backgroundColorName
@property (nonatomic) NSInteger backgroundColorSpaceID; // ivar: _backgroundColorSpaceID
@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (copy, nonatomic) NSArray *colorComponents; // ivar: _colorComponents
@property (nonatomic) NSInteger colorSpaceID; // ivar: _colorSpaceID
@property (nonatomic) NSInteger compressionType; // ivar: _compressionType
@property (copy, nonatomic) NSArray *containedImageNames; // ivar: _containedImageNames
@property (nonatomic) BOOL cubeMap; // ivar: _cubeMap
@property (nonatomic) NSInteger displayGamut; // ivar: _displayGamut
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (copy, nonatomic) NSString *foregroundColorName; // ivar: _foregroundColorName
@property (nonatomic) NSUInteger graphicsClass; // ivar: _graphicsClass
@property (nonatomic) NSInteger graphicsFeatureSetClass; // ivar: _graphicsFeatureSetClass
@property (copy, nonatomic) NSValue *iconSize; // ivar: _iconSize
@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (nonatomic) BOOL isFlippable; // ivar: _isFlippable
@property (nonatomic) BOOL isTemplate;
@property (copy, nonatomic) NSArray *layerReferences; // ivar: _layerReferences
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) NSInteger localizationIdentifier; // ivar: _localizationIdentifier
@property (copy, nonatomic) NSString *localizationName; // ivar: _localizationName
@property (nonatomic) CGFloat lossyCompressionQuality; // ivar: _lossyCompressionQuality
@property (nonatomic) CGFloat maxPointSize; // ivar: _maxPointSize
@property (nonatomic) NSUInteger memoryClass; // ivar: _memoryClass
@property (nonatomic) CGFloat minPointSize; // ivar: _minPointSize
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger nameIdentifier; // ivar: _nameIdentifier
@property (nonatomic) int objectVersion; // ivar: _objectVersion
@property (nonatomic) BOOL optOutOfThinning; // ivar: _optOutOfThinning
@property (nonatomic) CGSize physicalSizeInMeters; // ivar: _physicalSizeInMeters
@property (nonatomic) BOOL preservesVectorRepresentation; // ivar: _preservesVectorRepresentation
@property (nonatomic) NSInteger renditionType; // ivar: _renditionType
@property (nonatomic) CGSize resizableSliceSize; // ivar: _resizableSliceSize
@property (nonatomic) NSInteger resizingMode; // ivar: _resizingMode
@property (nonatomic) NSUInteger scaleFactor; // ivar: _scaleFactor
@property (nonatomic) NSInteger scalingStyle; // ivar: _scalingStyle
@property (nonatomic) NSInteger sizeClassHorizontal; // ivar: _sizeClassHorizontal
@property (nonatomic) NSInteger sizeClassVertical; // ivar: _sizeClassVertical
@property (nonatomic) ? sliceInsets; // ivar: _sliceInsets
@property (nonatomic) NSInteger subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *systemColorName; // ivar: _systemColorName
@property (copy, nonatomic) NSSet *tags; // ivar: _tags
@property (nonatomic) NSInteger templateRenderingMode; // ivar: _templateRenderingMode
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) NSUInteger textureDepth; // ivar: _textureDepth
@property (nonatomic) NSUInteger textureHeight; // ivar: _textureHeight
@property (copy, nonatomic) NSArray *textureInfos; // ivar: _textureInfos
@property (nonatomic) NSInteger textureInterpretation; // ivar: _textureInterpretation
@property (nonatomic) NSInteger texturePixelFormat; // ivar: _texturePixelFormat
@property (nonatomic) NSUInteger textureWidth; // ivar: _textureWidth
@property (nonatomic) ? transformation; // ivar: _transformation
@property (copy, nonatomic) NSString *universalTypeIdentifier; // ivar: _universalTypeIdentifier


-(NSInteger)renditionSubtype;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif