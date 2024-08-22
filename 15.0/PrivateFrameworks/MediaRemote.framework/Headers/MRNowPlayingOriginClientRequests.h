// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRNOWPLAYINGORIGINCLIENTREQUESTS_H
#define MRNOWPLAYINGORIGINCLIENTREQUESTS_H

@class NSNumber, NSDate, NSMutableArray, NSMutableDictionary;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRDeviceInfo.h"
#import "MROrigin.h"
#import "MRPlayerPath.h"

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSDate *_lastPlayingDate;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    NSMutableArray *_lastPlayingDateCompletions;
}


@property (copy, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) MROrigin *origin; // ivar: _origin
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *volumeCapabilities;


-(id)debugDescription;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg0 ;
-(id)transactionCallbackForName:(SEL)arg0 ;
-(void)handleDeviceInfoRequestWithCompletion:(id)arg0 ;
-(void)handleLastPlayingDateRequestWithCompletion:(id)arg0 ;
-(void)handleVolumeCapabilitiesRequestWithCompletion:(id)arg0 ;
-(void)handleVolumeRequestWithCompletion:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)restoreNowPlayingClientState;
// -(void)setTransactionCallback:(id)arg0 forName:(unk)arg1  ;


@end


#endif