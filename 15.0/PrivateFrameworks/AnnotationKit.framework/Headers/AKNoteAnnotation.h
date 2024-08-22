// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKNOTEANNOTATION_H
#define AKNOTEANNOTATION_H

@class NSString, UIColor;
@protocol AKParentAnnotationProtocol, AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKNoteAnnotation : AKAnnotation <AKParentAnnotationProtocol, AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol>



@property (weak) AKAnnotation *childAnnotation; // ivar: _childAnnotation
@property (copy) NSString *contents; // ivar: _contents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIColor *fillColor; // ivar: _fillColor
@property (readonly) NSUInteger hash;
@property CGRect rectangle; // ivar: _rectangle
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif