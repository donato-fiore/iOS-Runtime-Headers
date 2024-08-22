// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCONDITIONCOLLECTION_H
#define HFCONDITIONCOLLECTION_H

@class NSArray, NSPredicate;

#import <Foundation/Foundation.h>


@interface HFConditionCollection : NSObject

@property (retain, nonatomic) NSArray *conditions; // ivar: _conditions
@property (readonly, copy, nonatomic) NSPredicate *predicate;


+(id)_findBestConditionMatchForPredicates:(id)arg0 ;
+(id)_findBestMatchingConditionsForPredicates:(id)arg0 ;
+(id)_flattenedSubpredicatesForAndPredicate:(id)arg0 ;
+(id)_singleConditionForPredicate:(id)arg0 knownConditionsOnly:(BOOL)arg1 ;
+(id)conditionCollectionForPredicate:(id)arg0 ;
-(id)init;
-(id)initWithConditions:(id)arg0 ;
-(void)addCondition:(id)arg0 ;
-(void)removeCondition:(id)arg0 ;


@end


#endif