// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWALLPAPEROBSERVERCONFIGURATION_H
#define PRSWALLPAPEROBSERVERCONFIGURATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PRSWallpaperLocationStateObserver.h"
#import "PRSWallpaperSnapshotObserver.h"

@interface PRSWallpaperObserverConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) PRSWallpaperLocationStateObserver *locationStateObserver; // ivar: _locationStateObserver
@property (retain, nonatomic) PRSWallpaperSnapshotObserver *snapshotObserver; // ivar: _snapshotObserver


+(id)configurationWithHandler:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)locations;
-(id)init;
-(void)setLocations:(NSUInteger)arg0 ;
-(void)setQueue:(id)arg0 ;


@end


#endif