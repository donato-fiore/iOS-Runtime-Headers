// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKIMAGEANNOTATION_H
#define AKIMAGEANNOTATION_H

@class NSString, UIImage;
@protocol AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKFlippableAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKImageAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKFlippableAnnotationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow; // ivar: _hasShadow
@property (readonly) NSUInteger hash;
@property BOOL horizontallyFlipped; // ivar: _horizontallyFlipped
@property (retain) UIImage *image; // ivar: _image
@property CGRect rectangle; // ivar: _rectangle
@property CGFloat rotationAngle; // ivar: _rotationAngle
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // ivar: _verticallyFlipped


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)adjustModelToCompensateForOriginalExif;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif