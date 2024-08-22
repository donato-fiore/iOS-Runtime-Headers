// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLISETUPINTERACTOR_H
#define CLISETUPINTERACTOR_H

@class NSString, SFDevice;
@protocol AVAudioPlayerDelegate, FMFSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDSSetupSession.h"

@interface CLISetupInteractor : NSObject <AVAudioPlayerDelegate, FMFSessionDelegate>

 {
    BOOL _recognizeVoiceEnabled;
    BOOL _locationEnabled;
    BOOL _personalRequestsEnabled;
    BOOL _siriEnabled;
    BOOL _activeDeviceEnabled;
    BOOL _odeonEnabled;
    BOOL _soundRecognitionEnabled;
    NSString *_homeName;
    NSString *_roomName;
    int _homeIndex;
    int _roomIndex;
    int _suggestedRoomIndex;
    int _stereoRole;
    unsigned char _homePodType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) NSUInteger peerFeatureFlags; // ivar: _peerFeatureFlags
@property (retain, nonatomic) HDSSetupSession *setupSession; // ivar: _setupSession
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger testFlags; // ivar: _testFlags


-(id)init;
-(void)_cleanup;
-(void)_cleanupSession;
-(void)_invalidate;
-(void)dealloc;
-(void)invalidate;
-(void)sessionHandleProgress:(unsigned int)arg0 inInfo:(id)arg1 session:(id)arg2 ;
-(void)setCLIPromptsForStates;
-(void)setSetupUserInputConfig:(id)arg0 ;


@end


#endif