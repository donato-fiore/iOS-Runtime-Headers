// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEMORYFEEDCHROMECONTROLLER_H
#define PXSTORYMEMORYFEEDCHROMECONTROLLER_H

@class NSString, UINavigationItem;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXFeedChromeController;

#import <Foundation/Foundation.h>

#import "PXStoryMemoryFeedDataSourceManager.h"
#import "PXLibraryFilterState.h"
#import "PXSharedLibraryStatusProvider.h"

@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXFeedChromeController>



@property (readonly, nonatomic) PXStoryMemoryFeedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (readonly, nonatomic) UINavigationItem *navigationItem; // ivar: _navigationItem
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider; // ivar: _sharedLibraryStatusProvider
@property (readonly) Class superclass;


-(id)init;
-(id)initWithViewController:(id)arg0 dataSourceManager:(id)arg1 ;
-(void)_handleFavoritesToggleButton:(id)arg0 ;
-(void)_invalidateChrome;
-(void)_updateChrome;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif