// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUAUDIOPLAYERSESSIONMANAGER_H
#define SUAUDIOPLAYERSESSIONMANAGER_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SUAudioPlayerSessionManager : NSObject {
    NSMutableDictionary *_sessions;
}


@property (readonly, nonatomic) NSArray *allSessionURLs;


+(id)sessionManager;
-(id)audioPlayerForURL:(id)arg0 ;
-(id)endSessionForURL:(id)arg0 ;
-(id)init;
-(id)startSessionWithURL:(id)arg0 ;
-(id)stopAllAudioPlayerSessions;
-(void)_audioPlayerStatusChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif