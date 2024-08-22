// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUAUDIOPLAYER_H
#define CUAUDIOPLAYER_H

@class AVAudioSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUAudioRequest.h"
#import "CUAudioPlayer.h"

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate>

 {
    AVAudioSession *_audioSession;
    CUAudioRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    NSMutableArray *_playRequests;
    NSMutableDictionary *_preparedRequests;
    CUAudioPlayer *_selfRef;
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)init;
-(void)_abortRequestsWithError:(id)arg0 ;
-(void)_activate;
-(void)_completeRequest:(id)arg0 error:(id)arg1 ;
-(void)_invalidateWithFlags:(unsigned int)arg0 ;
-(void)_invalidated;
-(void)_playPreparedIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_playURL:(id)arg0 completion:(id)arg1 ;
-(void)_prepareURL:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)_processRequests;
-(void)activate;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioSessionInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)invalidateWithFlags:(unsigned int)arg0 ;
-(void)playPreparedIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)playURL:(id)arg0 completion:(id)arg1 ;
-(void)prepareURL:(id)arg0 identifier:(*id)arg1 completion:(id)arg2 ;


@end


#endif