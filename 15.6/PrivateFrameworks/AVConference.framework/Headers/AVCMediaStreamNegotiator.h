// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCMEDIASTREAMNEGOTIATOR_H
#define AVCMEDIASTREAMNEGOTIATOR_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiator.h"

@interface AVCMediaStreamNegotiator : NSObject {
    NSInteger _errorDetailCode;
    NSInteger _videoHeight;
    NSInteger _videoWidth;
    NSInteger _dpiFactor;
    unsigned char _deviceRole;
    NSData *_mediaBlobCompressed;
    NSData *_mediaBlobNegotiated;
    NSString *_dataSessionID;
    NSInteger _mediaStreamMode;
    VCMediaNegotiator *_mediaNegotiator;
    NSData *_remoteCallInfoBlob;
    NSUInteger _videoHDRMode;
}


@property (readonly, nonatomic) NSData *answer; // ivar: _answer
@property (readonly, nonatomic) NSData *offer; // ivar: _offer


-(BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)arg0 ;
-(BOOL)createAnswer;
-(BOOL)createOffer;
-(BOOL)initNegotiatorLocalConfiguration:(*id)arg0 ;
-(BOOL)processAnswerWithError:(*id)arg0 errorReason:(*id)arg1 ;
-(BOOL)processAnswererInitOptions:(id)arg0 errorReason:(*id)arg1 ;
-(BOOL)processOfferWithError:(*id)arg0 errorReason:(*id)arg1 ;
-(BOOL)processOffererInitOptions:(id)arg0 errorReason:(*id)arg1 ;
-(NSInteger)AVCVideoStreamModeWithAVCMediaStreamMode:(NSInteger)arg0 ;
-(NSInteger)clientCodecTypeWithCodecType:(NSInteger)arg0 ;
-(id)generateMediaStreamConfigurationWithError:(*id)arg0 ;
-(id)generateMediaStreamInitOptionsWithError:(*id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithMode:(NSInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithOffer:(id)arg0 error:(*id)arg1 ;
-(id)initWithOffer:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)supportedPixelFormats;
-(int)AVConferenceOperatingModeWithAVCMediaStreamMode:(NSInteger)arg0 ;
-(unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(NSInteger)arg0 ;
-(unsigned int)pickBestPixelFormatFromSet:(id)arg0 ;
-(unsigned int)pickBestPixelFormatFromSet:(id)arg0 preferenceList:(*unsigned int)arg1 count:(int)arg2 acceptDefault:(BOOL)arg3 ;
-(void)dealloc;
-(void)refreshLoggingParameters;


@end


#endif