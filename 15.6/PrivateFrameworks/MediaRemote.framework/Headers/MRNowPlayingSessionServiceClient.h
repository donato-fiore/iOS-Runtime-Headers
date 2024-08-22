// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGSESSIONSERVICECLIENT_H
#define MRNOWPLAYINGSESSIONSERVICECLIENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRNowPlayingSessionServiceClient : NSObject {
    NSMutableDictionary *_playerPathsByOrigin;
}




-(id)_existingPlayerPathForOrigin:(id)arg0 ;
-(id)_generatePlayerID;
-(id)_generatePlayerPathForOrigin:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(void)_handleCreatePlayerForOrigin:(id)arg0 deviceInfo:(id)arg1 completion:(id)arg2 ;
-(void)_handleDestroyPlayersForOrigin:(id)arg0 ;
-(void)mediaServicesResetNotification:(id)arg0 ;


@end


#endif