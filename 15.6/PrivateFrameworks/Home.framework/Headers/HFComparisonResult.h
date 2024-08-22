// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCOMPARISONRESULT_H
#define HFCOMPARISONRESULT_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFComparisonResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *differences;
@property (retain, nonatomic) NSMutableDictionary *mutableDifferences; // ivar: _mutableDifferences
@property (weak, nonatomic) id *objectA; // ivar: _objectA
@property (weak, nonatomic) id *objectB; // ivar: _objectB
@property (readonly, nonatomic) NSArray *realDifferences; // ivar: _realDifferences


+(id)resultWithDifference:(id)arg0 priority:(NSUInteger)arg1 ;
-(BOOL)containsCriticalDifference;
-(BOOL)hasNoDifferencesHigherThanPriority:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilder;
-(id)filteredIgnoringKeys:(id)arg0 ;
-(id)highestPriorityDifference;
-(id)initWithObjectA:(id)arg0 objectB:(id)arg1 ;
-(id)newDifferenceWithKey:(id)arg0 priority:(NSUInteger)arg1 block:(id)arg2 ;
-(void)add:(id)arg0 ;
-(void)addAll:(id)arg0 ;


@end


#endif