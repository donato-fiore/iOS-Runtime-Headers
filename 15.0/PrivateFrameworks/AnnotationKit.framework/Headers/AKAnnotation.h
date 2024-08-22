// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKANNOTATION_H
#define AKANNOTATION_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AKAnnotation.h"

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying>

 {
    id *_appearanceOverride;
    BOOL _shouldUseAppearanceOverride;
    BOOL _isObservingForAppearance;
    *CGPDFDocument _appearanceOverridePDF;
    BOOL _isObservingForIsEdited;
    BOOL _isReallyObservingForIsEdited;
    BOOL _conformsToAKStrokedAnnotationProtocol;
    BOOL _conformsToAKFilledAnnotationProtocol;
    BOOL _conformsToAKRectangularAnnotationProtocol;
    BOOL _conformsToAKFlippableAnnotationProtocol;
    BOOL _conformsToAKRotatableAnnotationProtocol;
    BOOL _conformsToAKTextAnnotationProtocol;
    BOOL _conformsToAKParentAnnotationProtocol;
}


@property (readonly) NSString *UUID; // ivar: _UUID
@property NSInteger akSerializationPlatform; // ivar: _akSerializationPlatform
@property NSInteger akSerializationVersion; // ivar: _akSerializationVersion
@property (copy) id *appearanceOverride;
@property (copy) NSString *author; // ivar: _author
@property (weak) AKAnnotation *childAnnotation; // ivar: _childAnnotation
@property (copy) NSString *customPlaceholderText; // ivar: _customPlaceholderText
@property (readonly) NSString *displayName;
@property (readonly) CGRect drawingBounds;
@property BOOL editsDisableAppearanceOverride; // ivar: _editsDisableAppearanceOverride
@property (readonly) CGRect hitTestBounds;
@property CGRect initialDrawingBoundsForAppearanceOverride; // ivar: _initialDrawingBoundsForAppearanceOverride
@property (readonly) CGRect integralDrawingBounds;
@property BOOL isBeingCopied; // ivar: _isBeingCopied
@property BOOL isDraggingHandle; // ivar: _isDraggingHandle
@property BOOL isEdited; // ivar: _isEdited
@property BOOL isEditingText; // ivar: _isEditingText
@property BOOL isTranslating; // ivar: _isTranslating
@property (readonly) BOOL isUsingAppearanceOverride;
@property (retain) NSDate *modificationDate; // ivar: _modificationDate
@property (nonatomic) NSInteger originalExifOrientation; // ivar: _originalExifOrientation
@property (nonatomic) CGFloat originalModelBaseScaleFactor; // ivar: _originalModelBaseScaleFactor
@property (weak) AKAnnotation *parentAnnotation; // ivar: _parentAnnotation
@property (readonly) BOOL shouldBurnIn;
@property BOOL shouldObserveEdits;
@property BOOL shouldUseAppearanceOverride;
@property BOOL shouldUsePlaceholderText; // ivar: _shouldUsePlaceholderText
@property BOOL textIsClipped; // ivar: _textIsClipped
@property BOOL textIsFixedHeight; // ivar: _textIsFixedHeight
@property BOOL textIsFixedWidth; // ivar: _textIsFixedWidth


+(BOOL)supportsSecureCoding;
+(id)annotationWithData:(id)arg0 ;
+(id)defaultPlaceholderText;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(BOOL)conformsToAKFilledAnnotationProtocol;
-(BOOL)conformsToAKFlippableAnnotationProtocol;
-(BOOL)conformsToAKParentAnnotationProtocol;
-(BOOL)conformsToAKRectangularAnnotationProtocol;
-(BOOL)conformsToAKRotatableAnnotationProtocol;
-(BOOL)conformsToAKStrokedAnnotationProtocol;
-(BOOL)conformsToAKTextAnnotationProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(void)adjustModelToCompensateForOriginalExif;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif