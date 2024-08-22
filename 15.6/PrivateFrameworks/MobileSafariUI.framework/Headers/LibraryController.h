// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIBRARYCONTROLLER_H
#define LIBRARYCONTROLLER_H

@class NSMutableDictionary, UIViewController, NSString;
@protocol LibraryItemRegistration, UINavigationControllerDelegate, LibraryViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "LibraryItemController.h"
#import "MainLibrarySectionController.h"
#import "LibraryConfiguration.h"
#import "BrowserRootViewController.h"
#import "LibraryViewController.h"

@interface LibraryController : NSObject <LibraryItemRegistration, UINavigationControllerDelegate, LibraryViewControllerDelegate>

 {
    NSMutableDictionary *_itemsByCollection;
    LibraryItemController *_lastSelectedItemController;
    UIViewController *_viewControllerForLastSelectedItemController;
    MainLibrarySectionController *_mainLibrarySectionController;
}


@property (readonly, nonatomic) LibraryConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) NSString *currentCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BrowserRootViewController *rootViewController; // ivar: _rootViewController
@property (retain, nonatomic) LibraryViewController *sidebarViewController; // ivar: _sidebarViewController
@property (readonly) Class superclass;


-(BOOL)libraryViewController:(id)arg0 shouldPersistSelectionForItem:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_reportSelectedItemForAnalytics:(id)arg0 ;
-(void)_updateSidebarButton;
-(void)browserViewControllerDidChangeSidebarStyle;
-(void)libraryViewController:(id)arg0 didSelectItem:(id)arg1 ;
-(void)libraryViewControllerDidClearSelection:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)registerItem:(id)arg0 forCollectionType:(id)arg1 ;


@end


#endif