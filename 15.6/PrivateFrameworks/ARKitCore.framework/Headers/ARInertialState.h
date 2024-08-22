// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARINERTIALSTATE_H
#define ARINERTIALSTATE_H

@protocol ARDaemonSecureCoding;

#import <Foundation/Foundation.h>


@interface ARInertialState : NSObject <ARDaemonSecureCoding>

 {
    CGFloat _covarianceMatrix;
    ? _position;
    ? _velocity;
    ? _accelerometerBias;
    ? _gyroscopeBias;
}


@property ? accelerometerBias;
@property (readonly, nonatomic) *CGFloat covarianceMatrix;
@property ? gyroscopeBias;
@property (nonatomic) ? orientation; // ivar: _orientation
@property ? position;
@property ? velocity;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCovarianceMatrix:(*CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif