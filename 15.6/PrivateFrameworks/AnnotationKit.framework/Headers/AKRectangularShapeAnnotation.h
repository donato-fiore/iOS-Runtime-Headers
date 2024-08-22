// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKRECTANGULARSHAPEANNOTATION_H
#define AKRECTANGULARSHAPEANNOTATION_H

@class NSTextStorage, NSString, NSDictionary;
@protocol AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKTextAnnotationProtocol;


#import "AKShapeAnnotation.h"

@interface AKRectangularShapeAnnotation : AKShapeAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKTextAnnotationProtocol>



@property (retain) NSTextStorage *annotationText; // ivar: _annotationText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isEditingText;
@property CGRect rectangle; // ivar: _rectangle
@property CGFloat rotationAngle; // ivar: _rotationAngle
@property BOOL shouldUsePlaceholderText;
@property (readonly) Class superclass;
@property BOOL textIsClipped;
@property BOOL textIsFixedHeight;
@property BOOL textIsFixedWidth;
@property (copy) NSDictionary *typingAttributes; // ivar: _typingAttributes


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(void)adjustModelToCompensateForOriginalExif;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif