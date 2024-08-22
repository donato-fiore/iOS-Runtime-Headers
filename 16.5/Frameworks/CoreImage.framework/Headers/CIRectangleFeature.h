// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIRECTANGLEFEATURE_H
#define CIRECTANGLEFEATURE_H



#import "CIFeature.h"

@interface CIRectangleFeature : CIFeature

@property (readonly) CGPoint bottomLeft; // ivar: bottomLeft
@property (readonly) CGPoint bottomRight; // ivar: bottomRight
@property (readonly) CGRect bounds; // ivar: bounds
@property (readonly) CGPoint topLeft; // ivar: topLeft
@property (readonly) CGPoint topRight; // ivar: topRight


-(id)initWithBounds:(struct CGRect )arg0 topLeft:(struct CGPoint )arg1 topRight:(struct CGPoint )arg2 bottomLeft:(struct CGPoint )arg3 bottomRight:(struct CGPoint )arg4 ;
-(id)type;


@end


#endif