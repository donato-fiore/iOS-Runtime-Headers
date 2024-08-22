// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKSTROKEDANNOTATION_H
#define AKSTROKEDANNOTATION_H

@class NSString, UIColor;
@protocol AKStrokedAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol>



@property NSInteger brushStyle; // ivar: _brushStyle
@property (getter=isDashed) BOOL dashed; // ivar: _dashed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow; // ivar: _hasShadow
@property (readonly) NSUInteger hash;
@property (retain) UIColor *strokeColor; // ivar: _strokeColor
@property CGFloat strokeWidth; // ivar: _strokeWidth
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