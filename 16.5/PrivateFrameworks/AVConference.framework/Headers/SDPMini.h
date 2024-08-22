// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDPMINI_H
#define SDPMINI_H

@class NSString, NSMutableDictionary, NSNumber, NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SDPMini : NSObject {
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSNumber *videoRTPID;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}


@property (retain, nonatomic) NSNumber *aacBlockSize; // ivar: aacBlockSize
@property (nonatomic) BOOL allowAudioRecording; // ivar: allowAudioRecording
@property (nonatomic) BOOL allowRTCPFB; // ivar: allowRTCPFB
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation; // ivar: allowsContentsChangeWithAspectPreservation
@property (nonatomic) BOOL allowsDynamicMaxBitrate; // ivar: allowsDynamicMaxBitrate
@property (retain, nonatomic) NSNumber *answerBandwidth; // ivar: answerBandwidth
@property (readonly, nonatomic) NSMutableArray *audioPayloads; // ivar: audioPayloads
@property (retain, nonatomic) NSNumber *audioRTCPPort; // ivar: audioRTCPPort
@property (retain, nonatomic) NSNumber *audioRTPID; // ivar: audioRTPID
@property (retain, nonatomic) NSNumber *audioRTPPort; // ivar: audioRTPPort
@property (retain, nonatomic) NSNumber *audioUnitModel; // ivar: audioUnitModel
@property (retain, nonatomic) NSDictionary *featureListDict; // ivar: featureListDict
@property (retain, nonatomic) NSNumber *maxBandwidth; // ivar: maxBandwidth
@property (retain, nonatomic) NSString *origin; // ivar: origin
@property (readonly, nonatomic) NSMutableArray *secondaryAudioPayloads; // ivar: secondaryAudioPayloads
@property (retain, nonatomic) NSString *sessionIP; // ivar: sessionIP


+(BOOL)setPayload:(int)arg0 mediaLine:(id)arg1 ;
-(BOOL)getBasebandCodecType:(*id)arg0 sampleRate:(*id)arg1 ;
-(BOOL)getUseSbr:(*BOOL)arg0 blockSize:(*int)arg1 forAACFormat:(int)arg2 ;
-(BOOL)setVideoPayloads:(*int)arg0 count:(int)arg1 ;
-(id)SDPUsername;
-(id)composeAudioFMTPForPayload:(id)arg0 ;
-(id)composeAudioString;
-(id)composeBandwidthString;
-(id)composeFLSString;
-(id)composeSessionString;
-(id)getMediaLineForType:(int)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)mediaTypeToString:(int)arg0 ;
-(id)parseIP:(id)arg0 ;
-(id)parseRTCPPort:(id)arg0 ;
-(id)parseRTPID:(id)arg0 ;
-(id)toStringWithVideoEnabled:(BOOL)arg0 ;
-(int)rulesFramerate:(int)arg0 ;
-(void)addMediaLine:(id)arg0 mediaType:(int)arg1 ;
-(void)createVideoImageAttr:(int)arg0 direction:(int)arg1 dimensions:(struct imageTag *)arg2 count:(int)arg3 ;
-(void)dealloc;
-(void)getNegotiatedResolutionForPayload:(int)arg0 forInterface:(int)arg1 withRule:(id)arg2 direction:(int)arg3 result:(struct imageTag *)arg4 remoteSupportsHD:(BOOL)arg5 screenSharing:(BOOL)arg6 ;
-(void)parseAudioFormatAttribute:(id)arg0 ;
-(void)parseAudioMediaAttributes:(id)arg0 ;
-(void)parseBandwidth:(id)arg0 ;
-(void)parseMediaLine:(id)arg0 ;
-(void)parseSDPFromString:(id)arg0 ;
-(void)parseSessionAttributes:(id)arg0 ;
-(void)rulesImageSizeForExternalPayload:(int)arg0 pWidth:(*int)arg1 pHeight:(*int)arg2 ;
-(void)setBasebandCodecType:(id)arg0 sampleRate:(id)arg1 ;
-(void)setUseSbr:(BOOL)arg0 blockSize:(int)arg1 forAACFormat:(int)arg2 ;
-(void)setVideoRTCPFB:(BOOL)arg0 useNACK:(BOOL)arg1 ;


@end


#endif