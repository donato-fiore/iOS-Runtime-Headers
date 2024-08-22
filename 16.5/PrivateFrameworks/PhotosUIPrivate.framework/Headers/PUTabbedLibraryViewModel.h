// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTABBEDLIBRARYVIEWMODEL_H
#define PUTABBEDLIBRARYVIEWMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PUTabbedLibrarySettings.h"

@interface PUTabbedLibraryViewModel : NSObject

@property (readonly, nonatomic) PUTabbedLibrarySettings *settings; // ivar: _settings
@property (readonly, nonatomic) NSArray *tabInfos; // ivar: _tabInfos


+(id)viewModelWithDefaultParameters;
-(BOOL)_ppt_shouldShowBlankTab;
-(BOOL)_ppt_shouldShowNilTab;
-(BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg0 ;
-(BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg0 ;
-(BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg0 ;
-(BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg0 ;
-(BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg0 ;
-(BOOL)tabbedLibraryViewController:(id)arg0 shouldShowTabForContentMode:(int)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)tabInfoForContentMode:(int)arg0 ;
-(id)tabbedLibraryViewController:(id)arg0 tabBarItemForContentMode:(int)arg1 ;


@end


#endif