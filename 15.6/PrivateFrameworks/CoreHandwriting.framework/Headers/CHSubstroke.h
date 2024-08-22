// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSUBSTROKE_H
#define CHSUBSTROKE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHEncodedStrokeIdentifier.h"

@interface CHSubstroke : NSObject <NSSecureCoding>

 {
    ? _convexHull;
}


@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGFloat curvature; // ivar: _curvature
@property (readonly, nonatomic) CGFloat endTimestamp; // ivar: _endTimestamp
@property (readonly, nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // ivar: _strokeIdentifier


+(BOOL)supportsSecureCoding;
+(id)substrokesForStroke:(id)arg0 ;
-(*void)convexHull;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSubstroke:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStrokeIdentifier:(id)arg0 bounds:(struct CGRect )arg1 startTimestamp:(CGFloat)arg2 endTimestamp:(CGFloat)arg3 convexHull:(*void)arg4 curvature:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif