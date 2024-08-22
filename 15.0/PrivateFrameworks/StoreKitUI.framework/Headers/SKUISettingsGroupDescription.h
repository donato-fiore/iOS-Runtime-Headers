// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISETTINGSGROUPDESCRIPTION_H
#define SKUISETTINGSGROUPDESCRIPTION_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "SKUISettingsHeaderFooterDescription.h"
#import "SKUISettingsObjectStore.h"
#import "SKUISettingsContext.h"
#import "SKUIClientContext.h"
#import "SKUISettingsGroupController.h"
#import "SKUISettingsGroupsDescription.h"
#import "SKUIGroupViewElement.h"

@interface SKUISettingsGroupDescription : NSObject {
    NSMutableSet *_editableSettings;
    SKUISettingsHeaderFooterDescription *_footerDescription;
    SKUISettingsHeaderFooterDescription *_headerDescription;
    SKUISettingsObjectStore *_settingDescriptions;
    SKUISettingsContext *_settingsContext;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) SKUISettingsGroupController *controller; // ivar: _controller
@property (weak, nonatomic) SKUISettingsGroupsDescription *parent; // ivar: _parent
@property (retain, nonatomic) SKUIGroupViewElement *viewElement; // ivar: _viewElement


-(BOOL)hasEditableSettingDescriptions;
-(BOOL)hasFooter;
-(BOOL)hasHeader;
-(BOOL)hasNoVisibleSettings;
-(BOOL)isEmpty;
-(BOOL)isSettingDescriptionHidden:(id)arg0 ;
-(NSUInteger)index;
-(NSUInteger)numberOfSettings;
-(id)description;
-(id)editableSettingDescriptions;
-(id)footerDescription;
-(id)headerDescription;
-(id)indexPathForSettingDescription:(id)arg0 ;
-(id)initWithParent:(id)arg0 settingsContext:(id)arg1 ;
-(id)newSiblingWithClass:(Class)arg0 ;
-(id)settingDescriptionAtIndex:(NSUInteger)arg0 ;
-(id)viewElementForSettingAtIndex:(NSUInteger)arg0 ;
-(void)_dismissViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dispatchUpdateForSettingDescription:(id)arg0 updateType:(NSInteger)arg1 ;
-(void)_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updatedEditsValid;
-(void)addSettingDescription:(id)arg0 ;
-(void)addSettingViewElement:(id)arg0 ;
-(void)addSibling:(id)arg0 ;
-(void)deleteSettingDescription:(id)arg0 ;
-(void)deleteSettingsGroup;
-(void)dispatchUpdate:(id)arg0 ;
-(void)hideSettingDescription:(id)arg0 ;
-(void)hideSettingsGroup;
-(void)recycle;
-(void)reloadData;
-(void)reloadSettingDescription:(id)arg0 ;
-(void)requestLayoutForWidth:(CGFloat)arg0 context:(id)arg1 ;
-(void)revealSettingDescription:(id)arg0 ;
-(void)revealSettingsGroup;
-(void)setFooterDescription:(id)arg0 ;
-(void)setFooterViewElement:(id)arg0 ;
-(void)setHeaderDescription:(id)arg0 ;
-(void)setHeaderViewElement:(id)arg0 ;


@end


#endif