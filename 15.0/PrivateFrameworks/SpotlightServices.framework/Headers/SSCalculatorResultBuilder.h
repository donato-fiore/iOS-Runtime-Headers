// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCALCULATORRESULTBUILDER_H
#define SSCALCULATORRESULTBUILDER_H

@class NSString;


#import "SSResultBuilder.h"

@interface SSCalculatorResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *input; // ivar: _input
@property (nonatomic) BOOL isCalculation; // ivar: _isCalculation
@property (nonatomic) BOOL isCurrencyConversion; // ivar: _isCurrencyConversion
@property (retain, nonatomic) NSString *output; // ivar: _output


+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
+(id)yahooAttributionImageWithSize:(struct CGSize )arg0 ;
-(id)buildCommand;
-(id)buildCompactCardSection;
-(id)buildInlineCardSections;
-(id)buildResult;
-(id)initWithResult:(id)arg0 ;


@end


#endif