// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTRIANGLEANNOTATION_H
#define AKTRIANGLEANNOTATION_H

@class NSString, UIBezierPath;
@protocol AKFlippableAnnotationProtocol;


#import "AKRectangularShapeAnnotation.h"

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL horizontallyFlipped; // ivar: _horizontallyFlipped
@property (retain) UIBezierPath *path; // ivar: _path
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // ivar: _verticallyFlipped


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif