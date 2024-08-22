// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSFOCUSMODESHOMESCREENSETTINGSSERVICE_H
#define SBSFOCUSMODESHOMESCREENSETTINGSSERVICE_H


#import <Foundation/Foundation.h>


@interface SBSFocusModesHomeScreenSettingsService : NSObject



+(id)activateConnection;
+(void)addSuggestedHomeScreenPageWithRequest:(id)arg0 ;
+(void)homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg0 completion:(id)arg1 ;
+(void)homeScreenSnapshotsWithRequest:(id)arg0 completion:(id)arg1 ;
+(void)updateFocusModeHomeScreenSettingsWithRequest:(id)arg0 ;


@end


#endif