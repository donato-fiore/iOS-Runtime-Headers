// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMEMORYFEEDCHROMECONTROLLER_H
#define PXSTORYMEMORYFEEDCHROMECONTROLLER_H

@class NSString, UINavigationItem;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryFeedChromeController;

#import <Foundation/Foundation.h>

#import "PXStoryMemoryFeedDataSourceManager.h"

@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryFeedChromeController>



@property (readonly, nonatomic) PXStoryMemoryFeedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) UINavigationItem *navigationItem; // ivar: _navigationItem
@property (readonly) Class superclass;


-(id)init;
-(id)initWithViewController:(id)arg0 dataSourceManager:(id)arg1 ;
-(void)_handleFavoritesToggleButton:(id)arg0 ;
-(void)_invalidateChrome;
-(void)_updateChrome;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif