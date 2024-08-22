// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVISIONFEATUREAESTHETICSRESULT_H
#define AXMVISIONFEATUREAESTHETICSRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float aestheticScore; // ivar: _aestheticScore
@property (readonly, nonatomic) float failureScore; // ivar: _failureScore
@property (readonly, nonatomic) float noiseScore; // ivar: _noiseScore
@property (readonly, nonatomic) float pleasantCompositionScore; // ivar: _pleasantCompositionScore
@property (readonly, nonatomic) float wellChosenBackgroundScore; // ivar: _wellChosenBackgroundScore
@property (readonly, nonatomic) float wellFramedSubjectScore; // ivar: _wellFramedSubjectScore


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVisionAestheticsObservation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif