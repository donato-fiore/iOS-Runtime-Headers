// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKARROWANNOTATION_H
#define AKARROWANNOTATION_H

@class NSTextStorage, NSString, NSDictionary;
@protocol AKTextAnnotationProtocol;


#import "AKShapeAnnotation.h"

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol>



@property (retain) NSTextStorage *annotationText; // ivar: _annotationText
@property NSUInteger arrowHeadStyle; // ivar: _arrowHeadStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGPoint endPoint; // ivar: _endPoint
@property (readonly) NSUInteger hash;
@property (getter=isHighlighted) BOOL highlighted;
@property BOOL isEditingText;
@property NSUInteger maximumNumberOfCharacters;
@property CGPoint midPoint; // ivar: _midPoint
@property BOOL shouldUsePlaceholderText;
@property CGPoint startPoint; // ivar: _startPoint
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
-(struct CGRect )hitTestBounds;
-(void)adjustModelToCompensateForOriginalExif;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif