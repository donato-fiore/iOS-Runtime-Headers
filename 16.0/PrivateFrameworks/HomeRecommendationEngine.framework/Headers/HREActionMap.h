// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HREACTIONMAP_H
#define HREACTIONMAP_H

@class NSMutableArray, NSPredicate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HREActionMap : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *childMaps; // ivar: _childMaps
@property (retain, nonatomic) NSPredicate *condition; // ivar: _condition
@property (nonatomic) BOOL visitedByFlatten; // ivar: _visitedByFlatten


+(id)actionMapWithChildMaps:(id)arg0 ;
+(id)emptyMap;
-(BOOL)conditionSatisfiedByObject:(id)arg0 ;
-(id)_initWithCondition:(id)arg0 childMaps:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flattenedMapEvaluatedForObject:(id)arg0 ;
-(id)mergeWithActionMaps:(id)arg0 ;


@end


#endif