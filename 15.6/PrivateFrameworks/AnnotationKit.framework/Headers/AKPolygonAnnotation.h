// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKPOLYGONANNOTATION_H
#define AKPOLYGONANNOTATION_H

@class NSString;
@protocol AKFlippableAnnotationProtocol;


#import "AKRectangularShapeAnnotation.h"

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL horizontallyFlipped;
@property NSUInteger pointCount; // ivar: _pointCount
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // ivar: _verticallyFlipped


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
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif