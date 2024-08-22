// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHKQUANTITYSAMPLECONTAINER_H
#define WFHKQUANTITYSAMPLECONTAINER_H

@class NSArray, NSString, HKQuantitySample, HKUnit;
@protocol NSSecureCoding, WFNaming, WFStatisticsSampleProvider;

#import <Foundation/Foundation.h>


@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider>



@property (readonly, nonatomic) BOOL canProvideDataSamples; // ivar: _canProvideDataSamples
@property (readonly, nonatomic) NSArray *dataSamples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSubsamples;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKQuantitySample *quantitySample; // ivar: _quantitySample
@property (retain, nonatomic) NSArray *subcontainers; // ivar: _subcontainers
@property (retain, nonatomic) NSArray *subsamples; // ivar: _subsamples
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit
@property (readonly, nonatomic) CGFloat value; // ivar: _value
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(CGFloat)normalizedValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSample:(id)arg0 unit:(id)arg1 ;
-(id)initWithSubsamples:(id)arg0 unit:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateValue:(id)arg0 fromStatisticsOperation:(NSInteger)arg1 ;


@end


#endif