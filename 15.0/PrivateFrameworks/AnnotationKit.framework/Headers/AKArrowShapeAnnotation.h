// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKARROWSHAPEANNOTATION_H
#define AKARROWSHAPEANNOTATION_H

@class NSString, UIColor;
@protocol AKFilledAnnotationProtocol;


#import "AKArrowAnnotation.h"

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol>



@property CGFloat arrowHeadLength; // ivar: _arrowHeadLength
@property CGFloat arrowHeadWidth; // ivar: _arrowHeadWidth
@property CGFloat arrowLineWidth; // ivar: _arrowLineWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIColor *fillColor;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif