// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKHEARTANNOTATION_H
#define AKHEARTANNOTATION_H

@class NSString;
@protocol AKFlippableAnnotationProtocol;


#import "AKRectangularShapeAnnotation.h"

@interface AKHeartAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL horizontallyFlipped;
@property (readonly) Class superclass;
@property BOOL verticallyFlipped; // ivar: _verticallyFlipped


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif