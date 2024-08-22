// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(id)generateEmptyPHash:(NSUInteger)arg0 writeFile:(BOOL)arg1 ;
+(id)lastHash;
+(void)notifyAudioHashNotification;
+(void)notifyAudioHashlessNotification;
+(void)notifyHashlessTrigger:(NSUInteger)arg0 ;
+(void)setLastHash:(id)arg0 ;
-(CGFloat)_signalEstimate:(*float)arg0 length:(NSUInteger)arg1 ;
-(id)_audioLogDirectory;
-(id)_generateMyriadInfo:(NSUInteger)arg0 writeFile:(BOOL)arg1 score:(float)arg2 triggerSource:(id)arg3 channel:(NSUInteger)arg4 audioProviderUUID:(id)arg5 absoluteTime:(NSUInteger)arg6 ;
-(id)cachedHash;
-(id)generatePHashFromVoiceTriggerInfo:(id)arg0 writeFile:(BOOL)arg1 ;
-(id)init;
-(unsigned short)pHash:(*float)arg0 length:(int)arg1 ;
-(void)_copyAudioDataInBuffer:(*float)arg0 bufferSize:(NSUInteger)arg1 copyLength:(NSUInteger)arg2 fromAudioData:(*void)arg3 ;
-(void)dealloc;
-(void)voiceTriggerDidDetectNearMiss:(id)arg0 deviceId:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg0 ;


@end


#endif