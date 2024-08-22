// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISCUSTOMRECIPE_H
#define ISCUSTOMRECIPE_H

@class NSDictionary, IFBundle, NSString;
@protocol ISCompositorResourceProvider, ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISCustomRecipe : NSObject <ISCompositorResourceProvider>



@property (readonly) NSDictionary *bitmapResources; // ivar: _bitmapResources
@property (readonly) IFBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<ISCompositorRecipe> *recipe; // ivar: _recipe
@property (readonly) Class superclass;
@property (readonly) NSDictionary *symbolResources; // ivar: _symbolResources


+(id)customRecipeWithInfo:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRecipe:(id)arg0 bitmapResources:(id)arg1 symbolResources:(id)arg2 bundle:(id)arg3 ;
-(id)resourceNamed:(id)arg0 ;


@end


#endif