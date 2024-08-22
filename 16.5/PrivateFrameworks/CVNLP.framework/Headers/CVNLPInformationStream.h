// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPINFORMATIONSTREAM_H
#define CVNLPINFORMATIONSTREAM_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CVNLPInformationStream : NSObject {
    CGFloat _decodingWeightValue;
    CGFloat _lowerBoundLogProbabilityValue;
}


@property (readonly, nonatomic) NSNumber *decodingWeight; // ivar: _decodingWeight
@property (readonly, nonatomic) NSNumber *lowerBoundLogProbability; // ivar: _lowerBoundLogProbability


+(id)defaultDecodingWeight;
+(id)defaultLowerBoundLogProbability;
-(id)initWithDecodingWeight:(id)arg0 ;
-(id)initWithDecodingWeight:(id)arg0 lowerBoundLogProbability:(id)arg1 ;


@end


#endif