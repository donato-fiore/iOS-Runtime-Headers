// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSWALLPAPERPUBLISHER_H
#define PRSWALLPAPERPUBLISHER_H

@class BSServiceConnectionListener, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, PRSWallpaperPublisherDelegate;

#import <Foundation/Foundation.h>


@interface PRSWallpaperPublisher : NSObject <BSServiceConnectionListenerDelegate>

 {
    CGFloat _lock_changeVersionTimestamps;
    id<PRSWallpaperPublisherDelegate> *_lock_delgate;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_lock_clients;
    PRSServerPosterPath" _lock_paths;
    NSUInteger _lock_changeVersions;
    os_unfair_lock_s _lock;
    BOOL _lock_activated;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PRSWallpaperPublisherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_lock_descriptionIfInvalidPaths:(*id)arg0 ;
-(id)init;
-(void)_initializeClient:(id)arg0 withKnownIdentities:(id)arg1 ;
-(void)_lock_noteChanged:(NSUInteger)arg0 ;
-(void)_lock_sendStateToClient:(id)arg0 ;
-(void)initializeWithPaths:(*id)arg0 recentlyChanged:(NSUInteger)arg1 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)updatePaths:(*id)arg0 ;


@end


#endif