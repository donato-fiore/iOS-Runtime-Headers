// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSMTIEMASKELEMENT_H
#define TSMTIEMASKELEMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSMTIEMaskElement : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat a; // ivar: _a
@property (readonly, nonatomic) CGFloat b; // ivar: _b
@property (readonly, nonatomic) CGFloat lowerLimit; // ivar: _lowerLimit
@property (readonly, nonatomic) CGFloat upperLimit; // ivar: _upperLimit


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoefficient:(CGFloat)arg0 offset:(CGFloat)arg1 lowerLimit:(CGFloat)arg2 upperLimit:(CGFloat)arg3 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif