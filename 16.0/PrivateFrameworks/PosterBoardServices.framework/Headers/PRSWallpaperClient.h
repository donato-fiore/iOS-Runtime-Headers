// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSWALLPAPERCLIENT_H
#define PRSWALLPAPERCLIENT_H

@class BSServiceConnection<BSServiceConnectionHost>, NSString;
@protocol PRSWallpaperObserverInitializing, PRSWallpaperObserving;

#import <Foundation/Foundation.h>

#import "PRSWallpaperPublisher.h"

@interface PRSWallpaperClient : NSObject <PRSWallpaperObserverInitializing>

 {
    PRSWallpaperPublisher *_publisher;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    id<PRSWallpaperObserving> *_proxy;
    NSString *_description;
    PRSServerPosterPath" _lastPaths;
    NSUInteger _changeVersions;
    NSUInteger _observed;
    BOOL _needsSandboxExtensions;
    BOOL _initialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)initializeWithKnownIdentities:(id)arg0 ;


@end


#endif