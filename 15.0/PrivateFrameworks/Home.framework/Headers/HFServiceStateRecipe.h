// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICESTATERECIPE_H
#define HFSERVICESTATERECIPE_H

@class NSSet, NSString;
@protocol NAIdentifiable, NSCopying, HFServiceTreeMatching;

#import <Foundation/Foundation.h>


@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying>



@property (readonly, nonatomic) NSSet *characteristicRecipes; // ivar: _characteristicRecipes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFServiceTreeMatching> *predicate; // ivar: _predicate
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPredicate:(id)arg0 characteristicRecipes:(id)arg1 ;
-(id)matchResultForServices:(id)arg0 ;


@end


#endif