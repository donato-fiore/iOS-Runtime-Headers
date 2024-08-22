// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPNETWORKOBSERVER_H
#define MPNETWORKOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPNetworkObserver : NSObject {
    int _musicCellularNetworkingAllowedNotifyToken;
    int _videosPreferencesChangedToken;
    NSInteger _networkUsageCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _videosAllowsCellularStreaming;
}


@property (readonly, nonatomic) BOOL isUsingNetwork;
@property (nonatomic, getter=isMusicCellularDownloadingAllowed) BOOL musicCellularDownloadingAllowed;
@property (nonatomic, getter=isMusicCellularStreamingAllowed) BOOL musicCellularStreamingAllowed;
@property (readonly, nonatomic, getter=isStoreCellularNetworkingAllowed) BOOL storeCellularNetworkingAllowed;
@property (nonatomic, getter=isVideoCellularStreamingAllowed) BOOL videoCellularStreamingAllowed;


+(id)sharedNetworkObserver;
-(id)_init;
-(id)init;
-(void)beginUsingNetwork;
-(void)dealloc;
-(void)endUsingNetwork;


@end


#endif