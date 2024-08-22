// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIALGORITHMCONVERGENCESTATE_H
#define NIALGORITHMCONVERGENCESTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger convergence; // ivar: _convergence
@property (nonatomic) BOOL insufficientHorizontalSweep; // ivar: _insufficientHorizontalSweep
@property (nonatomic) BOOL insufficientLighting; // ivar: _insufficientLighting
@property (nonatomic) BOOL insufficientMovement; // ivar: _insufficientMovement
@property (nonatomic) BOOL insufficientSignalStrength; // ivar: _insufficientSignalStrength
@property (nonatomic) BOOL insufficientVerticalSweep; // ivar: _insufficientVerticalSweep


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAlgorithmConvergenceState:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConvergenceStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif