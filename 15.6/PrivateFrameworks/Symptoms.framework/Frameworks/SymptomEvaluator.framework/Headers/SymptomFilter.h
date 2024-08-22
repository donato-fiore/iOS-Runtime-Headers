// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYMPTOMFILTER_H
#define SYMPTOMFILTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "Filter.h"

@interface SymptomFilter : NSObject

@property (retain, nonatomic) Filter *currentFilter; // ivar: _currentFilter
@property (retain, nonatomic) Filter *finalFilter; // ivar: _finalFilter
@property (readonly, nonatomic) NSMutableDictionary *potentialFilters; // ivar: _potentialFilters
@property (nonatomic) unsigned int targetSymptomId; // ivar: _targetSymptomId


-(id)description;
-(id)init;
-(int)configureItem:(id)arg0 ;


@end


#endif