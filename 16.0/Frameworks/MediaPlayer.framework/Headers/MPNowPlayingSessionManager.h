// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPNOWPLAYINGSESSIONMANAGER_H
#define MPNOWPLAYINGSESSIONMANAGER_H

@class NSMutableDictionary;
@protocol MPNowPlayingSessionManagerDataSource;

#import <Foundation/Foundation.h>


@interface MPNowPlayingSessionManager : NSObject

@property (weak, nonatomic) NSObject<MPNowPlayingSessionManagerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions


+(id)sharedManager;
-(id)_generateAudioSessionForRoutingContextUID:(id)arg0 ;
-(id)_init;
-(id)_sessionForPlayerPath:(id)arg0 ;
-(void)getActiveNowPlayingSessionForDeviceUID:(id)arg0 completion:(id)arg1 ;


@end


#endif