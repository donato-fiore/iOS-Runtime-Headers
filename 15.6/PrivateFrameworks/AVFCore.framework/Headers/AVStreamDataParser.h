// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSTREAMDATAPARSER_H
#define AVSTREAMDATAPARSER_H

@class NSData, NSString, NSError;
@protocol AVContentKeySessionDelegate, AVContentKeyRecipient, AVStreamDataParserOutputHandling;

#import <Foundation/Foundation.h>

#import "AVStreamDataParserInternal.h"
#import "AVAsset.h"

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient>

 {
    AVStreamDataParserInternal *_parser;
}


@property (readonly, nonatomic) AVAsset *asset;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVStreamDataParserOutputHandling> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly) NSInteger status;
@property (readonly) NSInteger status2;
@property (readonly) Class superclass;


+(BOOL)canParseExtendedMIMEType:(id)arg0 ;
+(id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg0 ;
+(id)audiovisualMIMETypes;
+(id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg0 ;
+(struct OpaqueCMBlockBuffer *)_createBlockBufferUsingNSData:(id)arg0 withOffset:(NSUInteger)arg1 withLength:(NSUInteger)arg2 ;
-(?)_createFigManifoldWithBlockBuffermanifold;
-(BOOL)_attachedToExternalContentKeySession;
-(BOOL)hasProtector;
-(BOOL)shouldProvideMediaDataForTrackID:(int)arg0 ;
-(id)contentKeySession;
-(id)init;
-(id)streamingContentKeyRequestDataForApp:(id)arg0 contentIdentifier:(id)arg1 trackID:(int)arg2 options:(id)arg3 error:(*id)arg4 ;
-(int)_attachToContentKeySession:(id)arg0 failedSinceAlreadyAttachedToAnotherSession:(*BOOL)arg1 ;
-(int)_figManifold:(struct OpaqueFigManifold *)arg0 discoveredNewTrackID:(int)arg1 mediaType:(id)arg2 ;
-(int)_figManifold:(struct OpaqueFigManifold *)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 orDecryptorDidChange:(*void)arg2 forTrackID:(int)arg3 ;
-(int)_figManifold:(struct OpaqueFigManifold *)arg0 pushedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 trackID:(int)arg2 flags:(unsigned int)arg3 ;
-(int)_figManifold:(struct OpaqueFigManifold *)arg0 trackDidEnd:(int)arg1 ;
-(int)_registerForFigManifoldCallbacksForTrackID:(int)arg0 ;
-(int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg0 ;
-(void)_appendStreamData:(struct OpaqueCMBlockBuffer *)arg0 withFlags:(NSUInteger)arg1 ;
-(void)_createAssetIfNecessary;
-(void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold *)arg0 ;
-(void)_willDeallocOrFinalize;
-(void)appendStreamData:(id)arg0 ;
-(void)appendStreamData:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRenewalRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg0 ;
-(void)dealloc;
-(void)expire;
-(void)processContentKeyResponseData:(id)arg0 forTrackID:(int)arg1 ;
-(void)processContentKeyResponseError:(id)arg0 forTrackID:(int)arg1 ;
-(void)providePendingMediaData;
-(void)renewExpiringContentKeyResponseDataForTrackID:(int)arg0 ;
-(void)setSession:(id)arg0 ;
-(void)setShouldProvideMediaData:(BOOL)arg0 forTrackID:(int)arg1 ;


@end


#endif