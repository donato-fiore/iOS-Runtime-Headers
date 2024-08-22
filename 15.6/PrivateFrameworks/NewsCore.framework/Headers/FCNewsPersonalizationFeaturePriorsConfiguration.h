// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSPERSONALIZATIONFEATUREPRIORSCONFIGURATION_H
#define FCNEWSPERSONALIZATIONFEATUREPRIORSCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCNewsPersonalizationFeaturePrior.h"

@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior; // ivar: _baselineFeaturePrior
@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *generalFeaturePrior; // ivar: _generalFeaturePrior


-(id)initWithDictionary:(id)arg0 ;


@end


#endif