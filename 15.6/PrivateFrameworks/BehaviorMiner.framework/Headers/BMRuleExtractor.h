// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMRULEEXTRACTOR_H
#define BMRULEEXTRACTOR_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BMRuleExtractor : NSObject

@property (readonly, nonatomic) NSUInteger basketCount; // ivar: _basketCount
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSMutableDictionary *patterns; // ivar: _patterns
@property BOOL shouldStop; // ivar: _shouldStop


-(NSUInteger)supportOfItemSet:(id)arg0 ;
-(id)initWithPatterns:(id)arg0 items:(id)arg1 basketCount:(NSUInteger)arg2 ;
-(id)itemSetForItemIndexSet:(id)arg0 ;
-(id)subsetsOfItemset:(id)arg0 ;
-(void)extractRulesWithMinSupport:(NSUInteger)arg0 minConfidence:(CGFloat)arg1 targetTypes:(id)arg2 batchSize:(NSUInteger)arg3 currentDate:(id)arg4 datedBaskets:(id)arg5 handler:(id)arg6 ;
-(void)extractRulesWithMinSupport:(NSUInteger)arg0 minConfidence:(CGFloat)arg1 targetTypes:(id)arg2 batchSize:(NSUInteger)arg3 handler:(id)arg4 ;
-(void)terminateEarly;


@end


#endif