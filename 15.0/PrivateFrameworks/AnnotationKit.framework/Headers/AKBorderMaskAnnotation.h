// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKBORDERMASKANNOTATION_H
#define AKBORDERMASKANNOTATION_H

@class NSString, UIColor;
@protocol AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKBorderMaskAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol>



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
-(void)adjustModelToCompensateForOriginalExif;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif