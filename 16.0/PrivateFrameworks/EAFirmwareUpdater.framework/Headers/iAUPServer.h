// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAUPSERVER_H
#define IAUPSERVER_H

@class NSMutableData;
@protocol HSModelDelegate, iAUPServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HSModel.h"
#import "FirmwareBundle.h"

@interface iAUPServer : NSObject <HSModelDelegate>

 {
    BOOL _escapeInProgress;
    HSModel *_hsModel;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned short objectBlockTransferSizes;
    unsigned int _firmwareImageBaseTransferAddress;
    unsigned short _accessoryCapabilities;
    unsigned int _totalBytesDownloadedInCurrentSession;
    BOOL _startEventSent;
}


@property (nonatomic) BOOL ackAppReentry; // ivar: _ackAppReentry
@property (nonatomic) BOOL byteEscape; // ivar: _byteEscape
@property (nonatomic) unsigned char currentAsset; // ivar: _currentAsset
@property NSObject<iAUPServerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQ; // ivar: _dispatchQ
@property (retain, nonatomic) FirmwareBundle *firmwareBundle; // ivar: _firmwareBundle
@property (nonatomic) unsigned char iAUPVersion; // ivar: _iAUPVersion
@property (nonatomic) int parserState; // ivar: _parserState
@property (readonly, nonatomic) BOOL restartRequired; // ivar: _restartRequired
@property (nonatomic) int serverState; // ivar: _serverState
@property (readonly, nonatomic) BOOL sleepWakeRequired; // ivar: _sleepWakeRequired
@property (readonly, nonatomic) BOOL urgentUpdate; // ivar: _urgentUpdate


-(BOOL)personalizationComplete;
-(char *)assetTypeString:(int)arg0 ;
-(char *)commandString:(int)arg0 ;
-(char *)parserStateString:(int)arg0 ;
-(char *)serverStateString:(int)arg0 ;
-(id)getNumberOfBytesDownloadedInCurrentSession;
-(id)initInstanceWithByteEscape:(BOOL)arg0 ;
-(id)processManifestProperties:(char *)arg0 length:(unsigned int)arg1 ;
-(id)sendCommand:(unsigned char)arg0 payload:(char *)arg1 payload_length:(unsigned short)arg2 ;
-(unsigned char)appendByteWithEscaping:(unsigned char)arg0 toObject:(*id)arg1 ;
-(unsigned int)supportedTargetProductIDCode;
-(void)accessoryDisconnected;
-(void)appendToLog:(id)arg0 ;
-(void)dealloc;
-(void)logCommand:(unsigned char)arg0 payload:(char *)arg1 length:(unsigned int)arg2 ;
-(void)processDataFromAccessory:(id)arg0 ;
-(void)processDownloadCompleteCommand:(char *)arg0 length:(unsigned int)arg1 ;
-(void)processIdentifyCommand:(char *)arg0 length:(unsigned int)arg1 ;
-(void)processInByte:(unsigned char)arg0 ;
-(void)processInTelegram;
-(void)processNotifyAccessoryErrorCommand:(char *)arg0 length:(unsigned int)arg1 ;
-(void)processPersonalizationInfo:(char *)arg0 length:(unsigned int)arg1 ;
-(void)processRequestDownloadCommand:(char *)arg0 length:(unsigned int)arg1 ;
-(void)resetParser;
-(void)setBootloaderEntry;
-(void)setHSModel:(id)arg0 fallbackModel:(id)arg1 error:(id)arg2 ;
-(void)setResumeInfo:(char *)arg0 length:(unsigned int)arg1 ;


@end


#endif