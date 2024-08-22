// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHICONROOTTABLEVIEWCONTROLLER_H
#define SBHICONROOTTABLEVIEWCONTROLLER_H

@class UITableViewController, UIView, NSString, UIViewController, _UILegibilitySettings, NSSet;
@protocol SBHIconRootViewProviding;


#import "SBFolder.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding>



@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) NSInteger currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *deepestFolderController;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) SBFolder *folder; // ivar: _folder
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly) Class superclass;


-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelScrolling;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)noteUserIsInteractingWithIcons;
-(void)revealIcon:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setIdleText:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif