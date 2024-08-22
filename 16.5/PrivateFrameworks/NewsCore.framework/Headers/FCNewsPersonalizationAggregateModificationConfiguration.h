// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPERSONALIZATIONAGGREGATEMODIFICATIONCONFIGURATION_H
#define FCNEWSPERSONALIZATIONAGGREGATEMODIFICATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCNewsPersonalizationAggregateModificationData.h"

@interface FCNewsPersonalizationAggregateModificationConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *aggregateModificationData; // ivar: _aggregateModificationData
@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *baselineModificationData; // ivar: _baselineModificationData


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif