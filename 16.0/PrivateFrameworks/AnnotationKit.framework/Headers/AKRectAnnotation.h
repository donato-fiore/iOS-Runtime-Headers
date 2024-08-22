// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKRECTANNOTATION_H
#define AKRECTANNOTATION_H



#import "AKRectangularShapeAnnotation.h"

@interface AKRectAnnotation : AKRectangularShapeAnnotation

@property CGFloat cornerRadius; // ivar: _cornerRadius


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