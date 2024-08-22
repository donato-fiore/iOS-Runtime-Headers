// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYAUTOEDITMOMENTRECIPE_H
#define PXSTORYAUTOEDITMOMENTRECIPE_H


#import <Foundation/Foundation.h>


@interface PXStoryAutoEditMomentRecipe : NSObject

@property (readonly, nonatomic) ? incomingTransition; // ivar: _incomingTransition
@property (readonly, nonatomic) ? innerTransition; // ivar: _innerTransition
@property (readonly, nonatomic) ? motion; // ivar: _motion
@property (readonly, nonatomic) NSUInteger recipeType; // ivar: _recipeType


-(id)description;
-(id)init;
-(id)initWithRecipeType:(NSUInteger)arg0 incomingTransition:(struct ? )arg1 innerTransition:(struct ? )arg2 motion:(struct ? )arg3 ;


@end


#endif