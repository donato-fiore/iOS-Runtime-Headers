// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBROOTFOLDERCONTROLLERCONFIGURATION_H
#define SBROOTFOLDERCONTROLLERCONFIGURATION_H

@class CHSAvocadoDescriptorProvider, UIViewController<SBHRootFolderCustomViewPresenting>, UIViewController, UIViewController<SBHSidebarProvider>, UIViewController<SBHLegibility>;


#import "SBFolderControllerConfiguration.h"

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration

@property (retain, nonatomic) CHSAvocadoDescriptorProvider *avocadoDescriptorProvider; // ivar: _avocadoDescriptorProvider
@property (nonatomic, getter=isDockExternal) BOOL dockExternal; // ivar: _dockExternal
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation; // ivar: _dockPinnedForRotation
@property (nonatomic) NSUInteger folderPageManagementAllowedOrientations; // ivar: _folderPageManagementAllowedOrientations
@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot; // ivar: _forSnapshot
@property (nonatomic) NSUInteger ignoresOverscrollOnFirstPageOrientations; // ivar: _ignoresOverscrollOnFirstPageOrientations
@property (nonatomic) NSUInteger ignoresOverscrollOnLastPageOrientations; // ivar: _ignoresOverscrollOnLastPageOrientations
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController; // ivar: _leadingCustomViewController
@property (retain, nonatomic) UIViewController *pullDownSearchViewController; // ivar: _pullDownSearchViewController
@property (nonatomic) NSUInteger showsAddWidgetButtonWhileEditingAllowedOrientations; // ivar: _showsAddWidgetButtonWhileEditingAllowedOrientations
@property (nonatomic) BOOL showsDoneButtonWhileEditing; // ivar: _showsDoneButtonWhileEditing
@property (nonatomic) NSUInteger sidebarAllowedOrientations; // ivar: _sidebarAllowedOrientations
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned; // ivar: _sidebarPinned
@property (retain, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController; // ivar: _sidebarViewController
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible; // ivar: _sidebarVisible
@property (retain, nonatomic) UIViewController<SBHLegibility> *todayViewController;
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController; // ivar: _trailingCustomViewController


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif