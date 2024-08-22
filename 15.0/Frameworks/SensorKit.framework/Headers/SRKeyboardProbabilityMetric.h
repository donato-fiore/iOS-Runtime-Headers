// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRKEYBOARDPROBABILITYMETRIC_H
#define SRKEYBOARDPROBABILITYMETRIC_H

@class NSArray, NSMutableArray, NSUnit;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>



@property (readonly, copy) NSArray *distributionSampleValues;
@property (retain) NSMutableArray *mutableSampleValues; // ivar: _mutableSampleValues
@property (nonatomic) NSInteger totalDataSamples; // ivar: _totalDataSamples
@property (copy) NSUnit *unitType; // ivar: _unitType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif