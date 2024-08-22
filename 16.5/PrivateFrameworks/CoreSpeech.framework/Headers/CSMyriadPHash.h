// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMYRIADPHASH_H
#define CSMYRIADPHASH_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSMyriadPHash : NSObject {
    *float _hammingWindow;
    *OpaqueFFTSetup _setup;
    *float _snrWindow;
    *OpaqueFFTSetup _snrSetup;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) short signalEstimate; // ivar: _signalEstimate
@property (nonatomic) unsigned char signalFractional; // ivar: _signalFractional


+(BOOL)writeHashResultIntoFile:(id)arg0 ;
+(BOOL)writeHashlessResult:(NSUInteger)arg0 ;
+(CGFloat)signalEstimateWithBuilder:(id)arg0 ;
+(id)createHashResult:(unsigned short)arg0 goodness:(unsigned char)arg1 confidence:(unsigned char)arg2 absTime:(NSUInteger)arg3 frac:(unsigned char)arg4 ;
+(id)createRemoraHashResult:(unsigned short)arg0 goodness:(unsigned char)arg1 confidence:(unsigned char)arg2 firstPassTriggerEndTime:(CGFloat)arg3 frac:(unsigned char)arg4 ;
+(id)createRemoraHashResultFromPHash:(id)arg0 firstPassTriggerEndTime:(CGFloat)arg1 ;
+(id)decodeWithMyriadPHash:(id)arg0 ;
+(id)generateEmptyPHash:(NSUInteger)arg0 writeFile:(BOOL)arg1 ;
+(id)lastHash;
+(id)overridePHash:(id)arg0 withMachTime:(NSUInteger)arg1 ;
+(void)notifyAudioHashNotification;
+(void)notifyAudioHashlessNotification;
+(void)notifyHashlessTrigger:(NSUInteger)arg0 ;
+(void)setLastHash:(id)arg0 ;
-(CGFloat)_signalEstimate:(*float)arg0 length:(NSUInteger)arg1 ;
-(id)_audioLogDirectory;
-(id)_generateMyriadInfo:(NSUInteger)arg0 hsStart:(NSUInteger)arg1 triggerEnd:(NSUInteger)arg2 writeFile:(BOOL)arg3 score:(float)arg4 triggerSource:(id)arg5 channel:(NSUInteger)arg6 audioProviderUUID:(id)arg7 absoluteTime:(NSUInteger)arg8 ;
-(id)cachedHash;
-(id)generatePHashFromVoiceTriggerInfo:(id)arg0 writeFile:(BOOL)arg1 ;
-(id)init;
-(unsigned short)pHash:(*float)arg0 length:(int)arg1 ;
-(void)_copyAudioDataInBuffer:(*float)arg0 bufferSize:(NSUInteger)arg1 copyLength:(NSUInteger)arg2 fromAudioData:(*void)arg3 ;
-(void)_copyPsdDataInBuffer:(*float)arg0 copyLength:(NSUInteger)arg1 fromAudioData:(*void)arg2 ;
-(void)_surfacePsdWithAudioChunk:(id)arg0 ;
-(void)dealloc;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;


@end


#endif