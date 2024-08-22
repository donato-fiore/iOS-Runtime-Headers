// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISETTINGSGROUPSDESCRIPTION_H
#define SKUISETTINGSGROUPSDESCRIPTION_H

@class NSMapTable, NSString;
@protocol SKUISettingsGroupControllerDelegate, SKUISettingsGroupsDescriptionDelegate;

#import <Foundation/Foundation.h>

#import "SKUISettingsObjectStore.h"
#import "SKUISettingsContext.h"
#import "SKUIClientContext.h"

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate>

 {
    NSMapTable *_controllers;
    SKUISettingsObjectStore *_groupDescriptions;
    SKUISettingsContext *_settingsContext;
}


@property (weak, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUISettingsGroupsDescriptionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEditableSettingDescriptions;
-(BOOL)shouldShowFooterForGroupAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShowHeaderForGroupAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfSettingsGroupDescription:(id)arg0 ;
-(NSUInteger)numberOfGroups;
-(NSUInteger)numberOfSettingsInGroupAtIndex:(NSUInteger)arg0 ;
-(id)_controllerForGroupElement:(id)arg0 ;
-(id)_gatherEditableSettings;
-(id)createEditTransaction;
-(id)footerDescriptionForGroupAtIndex:(NSUInteger)arg0 ;
-(id)headerDescriptionForGroupAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 settingsContext:(id)arg1 ;
-(id)owningViewControllerForSettingsGroupController:(id)arg0 ;
-(id)settingDescriptionAtIndexPath:(id)arg0 ;
-(id)settingsGroupController:(id)arg0 viewForSettingDescription:(id)arg1 ;
-(id)viewElementForSettingAtIndexPath:(id)arg0 ;
-(void)_addSettingsGroupWithViewElement:(id)arg0 controller:(id)arg1 ;
-(void)_dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dispatchUpdateForSettingsGroupDescription:(id)arg0 atIndex:(NSUInteger)arg1 withUpdateType:(NSInteger)arg2 ;
-(void)_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updatedEditsValid;
-(void)addSettingsGroupWithViewElement:(id)arg0 ;
-(void)deleteSettingAtIndexPath:(id)arg0 ;
-(void)deleteSettingsGroupDescription:(id)arg0 ;
-(void)dispatchUpdate:(id)arg0 ;
-(void)hideSettingsGroupDescription:(id)arg0 ;
-(void)recycle;
-(void)reloadData;
-(void)requestLayoutForWidth:(CGFloat)arg0 context:(id)arg1 ;
-(void)revealSettingsGroupDescription:(id)arg0 ;
-(void)settingsGroupController:(id)arg0 reloadSettingDescription:(id)arg1 ;


@end


#endif