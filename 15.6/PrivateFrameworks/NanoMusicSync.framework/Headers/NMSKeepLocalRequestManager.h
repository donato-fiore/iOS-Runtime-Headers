// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSKEEPLOCALREQUESTMANAGER_H
#define NMSKEEPLOCALREQUESTMANAGER_H

@class NSOperationQueue, NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface NMSKeepLocalRequestManager : NSObject {
    NSOperationQueue *_keepLocalRequestQueue;
    NSMutableSet *_keepLocalEnabledOnChargerAlbums;
    NSMutableSet *_keepLocalEnabledOnChargerPlaylists;
}


@property (readonly, nonatomic) NSSet *keepLocalEnabledOnChargerAlbums;
@property (readonly, nonatomic) NSSet *keepLocalEnabledOnChargerPlaylists;


+(id)sharedManager;
-(id)init;
-(void)_addKeepLocalEnabledOnChargerAlbum:(id)arg0 ;
-(void)_addKeepLocalEnabledOnChargerPlaylist:(id)arg0 ;
-(void)_removeKeepLocalEnabledOnChargerAlbum:(id)arg0 ;
-(void)_removeKeepLocalEnabledOnChargerPlaylist:(id)arg0 ;
-(void)enqueueKeepLocalRequestDisabledForModelObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)enqueueKeepLocalRequestEnabledForModelObject:(id)arg0 onCharger:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif