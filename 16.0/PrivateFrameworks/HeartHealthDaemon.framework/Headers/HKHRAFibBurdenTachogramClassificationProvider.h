// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONPROVIDER_H
#define HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONPROVIDER_H

@class ABTachogramClassification, HKHRSampleClassification;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenTachogramClassificationProvider : NSObject <NSSecureCoding>

 {
    ABTachogramClassification *_computedTachogramClassification;
}


@property (readonly, nonatomic) HKHRSampleClassification *sampleClassification; // ivar: _sampleClassification
@property (readonly, nonatomic) ABTachogramClassification *tachogramClassification;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleClassification:(id)arg0 ;
-(id)initWithSampleClassification:(id)arg0 tachogramClassification:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif