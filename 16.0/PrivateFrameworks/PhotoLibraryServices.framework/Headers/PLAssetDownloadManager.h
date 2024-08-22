// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETDOWNLOADMANAGER_H
#define PLASSETDOWNLOADMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLAssetDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    uint8_t _currentRequestId;
}


@property (weak, nonatomic) NSObject<PLAssetDownloadManagerDelegate> *delegate; // ivar: _delegate


+(id)defaultManager;
-(id)init;
-(int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg0 library:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onQueueAsync:(id)arg0 ;
-(void)cancelRequest:(int)arg0 ;


@end


#endif