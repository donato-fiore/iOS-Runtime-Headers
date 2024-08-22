// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPE_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPE_H

@class NSString;
@protocol NCSupplementaryViewPrototypeRecipeViewControllerDelegate, NCSupplementaryViewPrototypeRecipeDelegate;

#import <Foundation/Foundation.h>

#import "NCSupplementaryViewPrototypeRecipeMenuViewController.h"

@interface NCSupplementaryViewPrototypeRecipe : NSObject <NCSupplementaryViewPrototypeRecipeViewControllerDelegate>

 {
    NCSupplementaryViewPrototypeRecipeMenuViewController *_menuController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCSupplementaryViewPrototypeRecipeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedInstance;
+(void)registerRecipeWithDelegate:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_supplementaryViewsTestRecipeWithDelegate:(id)arg0 ;
-(void)_presentSupplementaryViewController;
-(void)_registerRecipeWithDelegate:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)recipeMenuViewController:(id)arg0 requestsInsertContentViewController:(id)arg1 ;
-(void)requestsInsertForPrototypeRecipeViewController:(id)arg0 ;
-(void)requestsRemovalForPrototypeRecipeViewController:(id)arg0 ;
-(void)requestsUpdateForPrototypeRecipeViewController:(id)arg0 ;


@end


#endif