// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPLAYBACKENGINESESSIONMANAGER_H
#define _MPCPLAYBACKENGINESESSIONMANAGER_H

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MPCPlaybackEngineEventObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSMutableArray *sessionArchives; // ivar: _sessionArchives
@property (readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap; // ivar: _sessionIdentifierArchiveMap
@property (retain, nonatomic) NSString *stateRestorationSessionIdentifier;
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported; // ivar: _stateRestorationSupported
@property (readonly) Class superclass;


+(id)archivesAtURL:(id)arg0 ;
-(id)_playbackSessionsDirectory;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)deleteSessionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)saveSessionWithCompletion:(id)arg0 ;


@end


#endif