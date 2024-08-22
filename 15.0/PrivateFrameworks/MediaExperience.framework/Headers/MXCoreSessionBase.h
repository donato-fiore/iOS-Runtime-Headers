// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXCORESESSIONBASE_H
#define MXCORESESSIONBASE_H

@class NSString, NSNumber, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MXCoreSessionBase : NSObject {
    BOOL _isPlaying;
    BOOL _isRecording;
    NSString *_audioCategory;
    NSString *_audioMode;
}


@property (retain, nonatomic) NSNumber *ID; // ivar: _ID
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSNumber *clientPID; // ivar: _clientPID
@property (nonatomic) int coreSessionType; // ivar: _coreSessionType
@property (retain, nonatomic) NSString *displayID; // ivar: _displayID
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isTheAssistant; // ivar: _isTheAssistant
@property (nonatomic) NSUInteger mxSessionIDCounter; // ivar: _mxSessionIDCounter
@property (retain, nonatomic) NSMutableArray *originalReporterIDs; // ivar: _originalReporterIDs
@property (retain, nonatomic) NSMutableArray *reporterIDs; // ivar: _reporterIDs
@property (nonatomic) BOOL reporterStarted; // ivar: _reporterStarted
@property (retain, nonatomic) NSString *routingContextUUID; // ivar: _routingContextUUID


-(BOOL)isPlaying;
-(BOOL)isRecording;
-(BOOL)isSidekick;
-(id)audioCategory;
-(id)audioMode;
-(id)info;
-(id)init;
-(int)setAudioCategory:(id)arg0 ;
-(int)setAudioMode:(id)arg0 ;
-(int)setIsPlaying:(BOOL)arg0 ;
-(int)setIsRecording:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif