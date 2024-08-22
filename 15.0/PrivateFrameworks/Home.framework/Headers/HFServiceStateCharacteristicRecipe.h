// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICESTATECHARACTERISTICRECIPE_H
#define HFSERVICESTATECHARACTERISTICRECIPE_H

@class NSString;
@protocol NAIdentifiable, NSCopying, HFServiceTreeMatching;

#import <Foundation/Foundation.h>


@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying>



@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRequired) BOOL required; // ivar: _required
@property (readonly, nonatomic) NSObject<HFServiceTreeMatching> *servicePredicate; // ivar: _servicePredicate
@property (readonly) Class superclass;


+(id)na_identity;
+(id)recipeForRootServiceCharacteristicType:(id)arg0 required:(BOOL)arg1 ;
+(id)recipesForRootServiceCharacteristicTypes:(id)arg0 required:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristicType:(id)arg0 servicePredicate:(id)arg1 required:(BOOL)arg2 ;
-(id)matchResultForServices:(id)arg0 ;


@end


#endif