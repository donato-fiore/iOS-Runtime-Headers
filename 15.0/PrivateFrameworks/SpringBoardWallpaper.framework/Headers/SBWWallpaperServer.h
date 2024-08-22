// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWWALLPAPERSERVER_H
#define SBWWALLPAPERSERVER_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSUIWallpaperClientToServerInterface, OS_dispatch_queue, SBWWallpaperServerDelegate;

#import <Foundation/Foundation.h>


@interface SBWWallpaperServer : NSObject <BSServiceConnectionListenerDelegate, SBSUIWallpaperClientToServerInterface>

 {
    FBServiceClientAuthenticator *_clientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBWWallpaperServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forLocations:(id)arg2 ;
-(BOOL)setWallpaperGradient:(id)arg0 forLocations:(id)arg1 ;
-(BOOL)setWallpaperImage:(id)arg0 adjustedImage:(id)arg1 thumbnailData:(id)arg2 imageHashData:(id)arg3 wallpaperOptions:(id)arg4 forLocations:(id)arg5 currentWallpaperMode:(id)arg6 ;
-(BOOL)setWallpaperWithVideo:(id)arg0 sandboxToken:(id)arg1 cropRect:(id)arg2 wallpaperMode:(id)arg3 ;
-(id)getWallpaperLegibilitySettingsForVariant:(id)arg0 ;
-(id)getWallpaperOptionsForVariant:(id)arg0 ;
-(id)init;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeWallpaperVideo;
-(void)restoreDefaultWallpaper;
-(void)setProceduralWallpaperIdentifier:(id)arg0 options:(id)arg1 locations:(id)arg2 ;


@end


#endif