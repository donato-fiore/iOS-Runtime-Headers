// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACTIONMENUHELPER_H
#define CNACTIONMENUHELPER_H

@class NSArray, UIDeferredMenuElement, NSString;

#import <Foundation/Foundation.h>


@interface CNActionMenuHelper : NSObject

@property (retain, nonatomic) NSArray *currentMenuItems; // ivar: _currentMenuItems
@property (copy, nonatomic) id *deferredMenuElementCompletionBlock; // ivar: _deferredMenuElementCompletionBlock
@property (retain, nonatomic) UIDeferredMenuElement *deferredMenuItem; // ivar: _deferredMenuItem
@property (retain, nonatomic) NSArray *displayedMenuItems; // ivar: _displayedMenuItems
@property (nonatomic) BOOL isMenuDisplayed; // ivar: _isMenuDisplayed
@property (retain, nonatomic) NSString *menuTitle; // ivar: _menuTitle


-(id)configurationActionProviderWithActionBlock:(SEL)arg0 ;
-(id)menuForProviders;
-(id)menuProviderWithActionBlock:(SEL)arg0 ;
-(id)targetedPreviewForSourceView:(id)arg0 ;
-(void)replaceDeferredMenuItemWithMenuItems:(id)arg0 ;
-(void)setupDeferredMenuItem;
-(void)updateVisibleMenuWithMenuItems:(id)arg0 contextMenuInteraction:(id)arg1 ;
-(void)updateWithMenuItems:(id)arg0 contextMenuInteraction:(id)arg1 ;
-(void)willDismissMenu;
-(void)willDisplayMenuWithContextMenuInteraction:(id)arg0 ;


@end


#endif