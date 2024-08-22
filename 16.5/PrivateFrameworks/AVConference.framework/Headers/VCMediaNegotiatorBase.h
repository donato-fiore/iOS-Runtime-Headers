// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORBASE_H
#define VCMEDIANEGOTIATORBASE_H

@class NSString, NSArray;
@protocol VCMediaNegotiatorProtocol;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiatorResultsAudio.h"
#import "VCMediaNegotiatorLocalConfiguration.h"
#import "VCMediaNegotiatorResultsFaceTimeSettings.h"
#import "VCMediaNegotiatorResultsMoments.h"
#import "VCMediaNegotiatorResultsVideo.h"
#import "VCMediaNegotiatorResults.h"

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol>

 {
    VCMediaNegotiatorResultsAudio *_negotiatedSystemAudioResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // ivar: _localSettings
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings; // ivar: _negotiatedAudioSettings
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings; // ivar: _negotiatedFaceTimeSettings
@property (readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings; // ivar: _negotiatedMomentsSettings
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings; // ivar: _negotiatedScreenSettings
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings; // ivar: _negotiatedSettings
@property (readonly, nonatomic) NSArray *negotiatedStreamGroups; // ivar: _negotiatedStreamGroups
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings; // ivar: _negotiatedVideoSettings
@property (readonly) Class superclass;


+(BOOL)initializeLocalConfiguration:(id)arg0 negotiationData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3 ;
+(BOOL)selectBestVideoRuleForTransport:(unsigned char)arg0 payload:(int)arg1 encodingType:(unsigned char)arg2 videoSettings:(id)arg3 localVideoRuleCollection:(id)arg4 remoteVideoRuleCollection:(id)arg5 ;
+(id)getPreferredVideoPayloadList:(id)arg0 localSupportedPayloads:(id)arg1 ;
+(id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg0 decodeRules:(id)arg1 isEncoder:(BOOL)arg2 ;
+(id)streamGroupIDsWithMediaBlob:(id)arg0 ;
+(void)applyCellularPreferredRule:(id)arg0 ;
+(void)setupNegotiatedAudioPayloads:(id)arg0 negotiatedAudioSettings:(id)arg1 primaryPayloadPreference:(id)arg2 ;
+(void)updateScreenRuleCollections:(id)arg0 size:(struct CGSize )arg1 ;
-(BOOL)processRemoteNegotiationData:(id)arg0 ;
-(id)initWithLocalSettings:(id)arg0 ;
-(id)negotiatedResultsForGroupID:(unsigned int)arg0 ;
-(id)negotiatedResultsForGroupID:(unsigned int)arg0 localU1Config:(id)arg1 remoteU1Config:(id)arg2 ;
-(id)negotiatedStreamGroupConfigForGroupID:(unsigned int)arg0 negotiatedStreamGroupConfigs:(id)arg1 ;
-(id)negotiationData;
-(unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)dealloc;


@end


#endif