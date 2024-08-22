// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKDOODLEANNOTATION_H
#define AKDOODLEANNOTATION_H

@class NSString, UIBezierPath, UIColor;
@protocol AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>



@property (getter=brushStyle) NSInteger brushStyle; // ivar: _brushStyle
@property (getter=isDashed) BOOL dashed; // ivar: _dashed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow; // ivar: _hasShadow
@property (readonly) NSUInteger hash;
@property (retain) UIBezierPath *path; // ivar: _path
@property BOOL pathIsDot; // ivar: _pathIsDot
@property BOOL pathIsPrestroked; // ivar: _pathIsPrestroked
@property CGRect rectangle; // ivar: _rectangle
@property CGFloat rotationAngle; // ivar: _rotationAngle
@property (retain) UIColor *strokeColor; // ivar: _strokeColor
@property CGFloat strokeWidth; // ivar: _strokeWidth
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
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