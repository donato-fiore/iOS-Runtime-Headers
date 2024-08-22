// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINGREDIENTSEARCHRESULT_H
#define HKINGREDIENTSEARCHRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKIngredientSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *ingredientId; // ivar: _ingredientId
@property (readonly, copy, nonatomic) NSString *ingredientName; // ivar: _ingredientName
@property (readonly, copy, nonatomic) NSString *strengthQuantity; // ivar: _strengthQuantity
@property (readonly, copy, nonatomic) NSString *strengthUnit; // ivar: _strengthUnit


-(id)dictionaryRepresentation;
-(id)initWithIngredientId:(id)arg0 ingredientName:(id)arg1 strengthQuantity:(id)arg2 strengthUnit:(id)arg3 ;


@end


#endif