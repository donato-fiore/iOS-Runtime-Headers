// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)settingsServer:(id)arg0 homeScreenSnapshotsWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)settingsServer:(id)arg0 updateFocusModeHomeScreenSettingsWithRequest:(id)arg1 ;


@end


#endif