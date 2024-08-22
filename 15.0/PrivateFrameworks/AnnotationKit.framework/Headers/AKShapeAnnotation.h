// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKSHAPEANNOTATION_H
#define AKSHAPEANNOTATION_H

@class NSString, UIColor;
@protocol AKFilledAnnotationProtocol;


#import "AKStrokedAnnotation.h"

@interface AKShapeAnnotation : AKStrokedAnnotation <AKFilledAnnotationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIColor *fillColor; // ivar: _fillColor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif