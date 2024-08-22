// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOCUSMODESHOMESCREENSETTINGSMANAGER_H
#define SBFOCUSMODESHOMESCREENSETTINGSMANAGER_H

@class NSString;
@protocol SBFocusModesHomeScreenSettingsServerDelegate;

#import <Foundation/Foundation.h>

#import "SBFocusModesHomeScreenSettingsServer.h"

@interface SBFocusModesHomeScreenSettingsManager : NSObject <SBFocusModesHomeScreenSettingsServerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBFocusModesHomeScreenSettingsServer *settingsServer; // ivar: _settingsServer
@property (readonly) Class superclass;


-(id)init;
-(void)_snapshotRemainingListViews:(id)arg0 snapshotDelay:(CGFloat)arg1 snapshotScale:(CGFloat)arg2 excludeWallpaper:(BOOL)arg3 forFocusModeIdentifier:(id)arg4 iconManager:(id)arg5 rootFolderView:(id)arg6 accumulatedSnapshots:(id)arg7 completion:(id)arg8 ;
-(void)_snapshotRootFolderView:(id)arg0 snapshotDelay:(CGFloat)arg1 snapshotScale:(CGFloat)arg2 excludeWallpaper:(BOOL)arg3 focusModeIdentifier:(id)arg4 iconManager:(id)arg5 isSuggestedPage:(BOOL)arg6 completion:(id)arg7 ;
-(void)settingsServer:(id)arg0 addSuggestedHomeScreenPageWithRequest:(id)arg1 ;
-(void)settingsServer:(id)arg0 homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)settingsServer:(id)arg0 homeScreenSnapshotsWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)settingsServer:(id)arg0 updateFocusModeHomeScreenSettingsWithRequest:(id)arg1 ;


@end


#endif