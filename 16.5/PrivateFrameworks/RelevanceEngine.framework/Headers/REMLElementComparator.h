// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLELEMENTCOMPARATOR_H
#define REMLELEMENTCOMPARATOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "REMLModel.h"

@interface REMLElementComparator : NSObject <NSCopying>

 {
    REMLModel *_model;
}


@property (readonly, nonatomic) NSUInteger comparisonLevels;
@property (copy, nonatomic) NSArray *filteringRules; // ivar: _filteringRules
@property (copy, nonatomic) NSArray *rankingRules; // ivar: _rankingRules


+(id)comparatorWithFilteringRules:(id)arg0 rankingRules:(id)arg1 model:(id)arg2 ;
-(BOOL)shouldHideElement:(id)arg0 ;
-(NSInteger)compareElement:(id)arg0 toElement:(id)arg1 level:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)model;


@end


#endif