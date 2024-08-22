// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPOSTERWALLPAPERMIGRATIONINFO_H
#define PBUIPOSTERWALLPAPERMIGRATIONINFO_H


#import <Foundation/Foundation.h>


@interface PBUIPosterWallpaperMigrationInfo : NSObject

@property (readonly, nonatomic) char homeProvider; // ivar: _homeProvider
@property (readonly, nonatomic) char lockProvider; // ivar: _lockProvider
@property (readonly, nonatomic) char pairingType; // ivar: _pairingType


-(id)_initWithPairingType:(char)arg0 lockProvider:(char)arg1 homeProvider:(char)arg2 ;
-(id)description;


@end


#endif