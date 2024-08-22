// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLPREFERENCESCONTROLLER_H
#define FLPREFERENCESCONTROLLER_H

@class NSArray, NSSet, AIDAServiceOwnersManager, NSString, PSListController;
@protocol FLSpecifierTapHandlerDelegate, FLViewModel;

#import <Foundation/Foundation.h>

#import "FLPreferencesFollowUpItemListViewController.h"

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate>

 {
    id<FLViewModel> *_topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    NSArray *_groups;
    NSSet *_spyglassAllowList;
    BOOL _activityIndicatorActive;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    NSString *_primaryAccountID;
    NSArray *_secondaryAccountIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *itemChangeObserver; // ivar: _itemChangeObserver
@property (weak, nonatomic) PSListController *listViewController; // ivar: _listViewController
@property (readonly) Class superclass;


-(id)_deferredLoadSpecifierWithName:(id)arg0 ;
-(id)_specifierForGroup:(id)arg0 ;
-(id)_specifierGroupString:(NSUInteger)arg0 ;
-(id)_specifiersForItem:(id)arg0 group:(id)arg1 ;
-(id)_topLevelSpecifiersForGroup:(NSUInteger)arg0 ;
-(id)_urlBasedSpecifierWithName:(id)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)spyglassSpecifiers;
-(id)topLevelSpecifiers;
-(id)topLevelSpecifiersForGroup:(NSUInteger)arg0 ;
-(void)_handleActionForSpecifier:(id)arg0 ;
-(void)_handleEmptyRefreshResult:(id)arg0 ;
-(void)_presentSpecifier:(id)arg0 fromEventSource:(NSUInteger)arg1 ;
-(void)_refreshItemsAndPresentDetailForSpecifier:(id)arg0 ;
-(void)_updateSpecifier:(id)arg0 withCommonPropertiesForGroup:(id)arg1 ;
-(void)_zeroActionFailure:(id)arg0 ;
-(void)loadSpecifier:(id)arg0 ;
-(void)preflightNetworkConnectivityForHandler:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)startPresentingForHandler:(id)arg0 withRemoteController:(id)arg1 ;
-(void)startSpinnerForSpecifier:(id)arg0 ;
-(void)stopSpinnerForSpecifier:(id)arg0 ;


@end


#endif