// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXCORESESSIONBASE_H
#define MXCORESESSIONBASE_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MXCoreSessionBase : NSObject

@property (retain) NSNumber *ID; // ivar: _ID
@property (retain) NSString *audioCategory; // ivar: _audioCategory
@property (retain) NSString *audioMode; // ivar: _audioMode
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (retain) NSString *clientName; // ivar: _clientName
@property (retain) NSNumber *clientPID; // ivar: _clientPID
@property (nonatomic) int coreSessionType; // ivar: _coreSessionType
@property (retain) NSString *displayID; // ivar: _displayID
@property (nonatomic) float interruptionFadeDuration; // ivar: _interruptionFadeDuration
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (nonatomic) BOOL isRecording; // ivar: _isRecording
@property (nonatomic) BOOL isTheAssistant; // ivar: _isTheAssistant
@property (nonatomic) NSUInteger mxSessionIDCounter; // ivar: _mxSessionIDCounter
@property (retain) NSArray *originalReporterIDs; // ivar: _originalReporterIDs
@property (retain) NSArray *reporterIDs; // ivar: _reporterIDs
@property (nonatomic) BOOL reporterStarted; // ivar: _reporterStarted
@property (retain) NSString *routingContextUUID; // ivar: _routingContextUUID


-(BOOL)hasAudioCategory:(id)arg0 ;
-(BOOL)hasAudioMode:(id)arg0 ;
-(BOOL)isSidekick;
-(id)info;
-(id)init;
-(void)dealloc;
-(void)updateClientName:(id)arg0 ;
-(void)updateDefaultInterruptionFadeDuration:(id)arg0 ;


@end


#endif