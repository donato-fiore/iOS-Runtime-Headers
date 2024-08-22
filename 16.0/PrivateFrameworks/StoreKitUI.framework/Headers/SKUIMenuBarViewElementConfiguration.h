// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMENUBARVIEWELEMENTCONFIGURATION_H
#define SKUIMENUBARVIEWELEMENTCONFIGURATION_H

@class IKAppMenuBarDocument, NSArray, NSString;
@protocol IKAppMenuBarDocumentDelegate, SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

#import <Foundation/Foundation.h>

#import "SKUIMenuItemViewElement.h"

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate>

 {
    IKAppMenuBarDocument *_menuBarDocument;
    NSInteger _menuBarStyle;
    NSArray *_menuItemViewElements;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIMenuBarViewElementConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger menuBarStyle;
@property (nonatomic, getter=_needsReload, setter=_setNeedsReload:) BOOL needsReload; // ivar: _needsReload
@property (readonly, nonatomic) NSUInteger numberOfMenuItems;
@property (weak, nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) NSObject<_SKUIMenuBarViewElementConfigurationReloadDelegate> *reloadDelegate; // ivar: _reloadDelegate
@property (readonly, nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (readonly, nonatomic) SKUIMenuItemViewElement *selectedMenuItemViewElement; // ivar: _selectedMenuItemViewElement
@property (readonly) Class superclass;


-(NSUInteger)indexOfMenuItemViewElement:(id)arg0 ;
-(id)_initWithMenuBarDocument:(id)arg0 ;
-(id)documentForEntityUniqueIdentifier:(id)arg0 ;
-(id)documentForMenuItemAtIndex:(NSUInteger)arg0 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg0 ;
-(id)documentOptionsForMenuItemAtIndex:(NSUInteger)arg0 ;
-(void)_ensureDataLoaded;
-(void)_reloadWithMenuBarStyle:(NSInteger)arg0 menuItemViewElements:(id)arg1 scrollEnabled:(BOOL)arg2 ;
-(void)contentWillAppearForMenuItemAtIndex:(NSUInteger)arg0 withEntityValueProvider:(id)arg1 clientContext:(id)arg2 ;
-(void)menuBarDocument:(id)arg0 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg1 ;
-(void)menuBarDocument:(id)arg0 didReplaceDocumentForMenuItem:(id)arg1 ;
-(void)menuBarDocument:(id)arg0 didSelectMenuItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif