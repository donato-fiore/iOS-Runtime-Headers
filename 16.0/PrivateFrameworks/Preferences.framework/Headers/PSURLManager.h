// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSURLMANAGER_H
#define PSURLMANAGER_H

@class PSListController<PSTopLevelController>;

#import <Foundation/Foundation.h>

#import "PSRootController.h"
#import "PSSplitViewController.h"

@interface PSURLManager : NSObject

@property (retain, nonatomic) PSRootController *rootController; // ivar: _rootController
@property (retain, nonatomic) PSSplitViewController *splitViewController; // ivar: _splitViewController
@property (retain, nonatomic) PSListController<PSTopLevelController> *topLevelController; // ivar: _topLevelController


+(id)sharedManager;
-(id)currentSpecifierIDPath;
-(id)keyValueDictionaryForURL:(id)arg0 ;
-(id)urlForCurrentNavStack;
-(void)_performURLHandlingForController:(id)arg0 dictionary:(id)arg1 items:(id)arg2 controllerNeedsPush:(BOOL)arg3 ;
-(void)handleDeferredURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 objectOffsetPair:(id)arg2 withCompletion:(id)arg3 ;
-(void)handleDeferredURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 withCompletion:(id)arg2 ;
-(void)performURLHandlingForController:(id)arg0 dictionary:(id)arg1 items:(id)arg2 controllerNeedsPush:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg0 ;
-(void)popToRootAndSelectDefaultCategory:(BOOL)arg0 performWithoutDeferringTransitions:(BOOL)arg1 ;
-(void)processURL:(id)arg0 animated:(BOOL)arg1 fromSearch:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)setOffsetForController:(id)arg0 fromObjectPair:(id)arg1 ;


@end


#endif