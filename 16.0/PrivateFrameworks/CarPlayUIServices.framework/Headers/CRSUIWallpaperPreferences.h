// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIWALLPAPERPREFERENCES_H
#define CRSUIWALLPAPERPREFERENCES_H

@class CRVehicle, CRPairedVehicleManager;

#import <Foundation/Foundation.h>

#import "CRSUIWallpaper.h"

@interface CRSUIWallpaperPreferences : NSObject

@property (retain, nonatomic) CRSUIWallpaper *currentWallpaper;
@property (retain, nonatomic) CRVehicle *vehicle; // ivar: _vehicle
@property (retain, nonatomic) CRPairedVehicleManager *vehicleManager; // ivar: _vehicleManager


+(id)_wallpaperWithIdentifier:(id)arg0 ;
+(id)availableWallpapers;
+(id)defaultWallpaper;
+(id)wallpaperWithIdentifier:(id)arg0 ;
-(id)init;


@end


#endif