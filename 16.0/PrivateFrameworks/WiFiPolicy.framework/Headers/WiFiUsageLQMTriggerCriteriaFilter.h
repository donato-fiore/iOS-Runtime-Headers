// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMTRIGGERCRITERIAFILTER_H
#define WIFIUSAGELQMTRIGGERCRITERIAFILTER_H

@class NSMutableArray, NSMutableSet, NSPredicate;

#import <Foundation/Foundation.h>


@interface WiFiUsageLQMTriggerCriteriaFilter : NSObject

@property (retain, nonatomic) NSMutableArray *criterias; // ivar: _criterias
@property (retain, nonatomic) NSMutableSet *features; // ivar: _features
@property (retain, nonatomic) NSPredicate *filterSamplesPredicate; // ivar: _filterSamplesPredicate


-(id)description;
-(id)initWith:(id)arg0 forFields:(id)arg1 andFeatures:(id)arg2 ;


@end


#endif