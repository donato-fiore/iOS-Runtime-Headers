// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGESCOREOBSERVATION_H
#define VNIMAGESCOREOBSERVATION_H

@class NSNumber;


#import "VNObservation.h"

@interface VNImageScoreObservation : VNObservation

@property (retain, nonatomic) NSNumber *blurScore; // ivar: _blurScore
@property (retain, nonatomic) NSNumber *exposureScore; // ivar: _exposureScore


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif