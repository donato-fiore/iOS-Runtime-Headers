// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAMENSTRUALALGORITHMSDEVIATIONANALYSIS_H
#define HAMENSTRUALALGORITHMSDEVIATIONANALYSIS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HAMenstrualAlgorithmsDeviation.h"

@interface HAMenstrualAlgorithmsDeviationAnalysis : NSObject <NSSecureCoding>



@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *infrequentBleeding; // ivar: _infrequentBleeding
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *irregularBleeding; // ivar: _irregularBleeding
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *prolongedBleeding; // ivar: _prolongedBleeding
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *spotting; // ivar: _spotting


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif