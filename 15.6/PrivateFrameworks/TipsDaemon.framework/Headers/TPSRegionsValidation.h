// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSREGIONSVALIDATION_H
#define TPSREGIONSVALIDATION_H

@class NSArray;


#import "TPSInclusivityValidation.h"

@interface TPSRegionsValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *excludeRegions;
@property (readonly, nonatomic) NSArray *targetRegions;


-(id)initWithTargetRegions:(id)arg0 excludeRegions:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif