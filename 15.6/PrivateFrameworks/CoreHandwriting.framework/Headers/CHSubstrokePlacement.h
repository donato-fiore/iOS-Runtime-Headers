// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSUBSTROKEPLACEMENT_H
#define CHSUBSTROKEPLACEMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHSubstroke.h"

@interface CHSubstrokePlacement : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGPoint coalescedCenter; // ivar: _coalescedCenter
@property (nonatomic) NSInteger originalWritingDirectionIndex; // ivar: _originalWritingDirectionIndex
@property (readonly, nonatomic) CGRect rotatedBounds;
@property (nonatomic) CGVector strokeDeviation; // ivar: _strokeDeviation
@property (readonly, nonatomic) CHSubstroke *substroke; // ivar: _substroke
@property (nonatomic) CGVector writingOrientation; // ivar: _writingOrientation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubstroke:(id)arg0 ;
-(struct CGAffineTransform )orientationTransform;
-(struct CGRect )orientedBounds;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif