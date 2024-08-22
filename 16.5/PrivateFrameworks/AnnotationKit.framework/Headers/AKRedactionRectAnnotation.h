// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKREDACTIONRECTANNOTATION_H
#define AKREDACTIONRECTANNOTATION_H



#import "AKRectangularShapeAnnotation.h"

@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation

@property BOOL isHighlighted; // ivar: _isHighlighted
@property BOOL isOpaque; // ivar: _isOpaque


+(BOOL)supportsSecureCoding;
-(BOOL)shouldBurnIn;
-(id)displayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForRedrawing;
-(struct CGRect )hitTestBounds;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif