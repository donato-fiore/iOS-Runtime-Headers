// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTRECIPIENTCACHE_H
#define PKPEERPAYMENTRECIPIENTCACHE_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "PKMapContainer.h"

@interface PKPeerPaymentRecipientCache : NSObject {
    os_unfair_lock_s _mapAccessLock;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}




+(id)_instanceName;
+(id)sharedCache;
-(BOOL)_canReadMap;
-(BOOL)_canWriteMap;
-(BOOL)_writeMapToDisk;
-(BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg0 ;
-(BOOL)purgeCache;
-(id)__init;
-(id)_keyForRecipientAddress:(id)arg0 ;
-(id)init;
-(id)recipientForRecipientAddress:(id)arg0 ;
-(void)_handleDiskMapChangedNotification:(id)arg0 ;
-(void)_handlePurgedNotification:(id)arg0 ;
-(void)_locked_setMapNeedsWrite;
-(void)_updateMapsFromDisk;
-(void)cacheRecipient:(id)arg0 forRecipientAddress:(id)arg1 ;
-(void)dealloc;
-(void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg0 ;
-(void)purgeRecipientWithRecipientAddress:(id)arg0 ;


@end


#endif