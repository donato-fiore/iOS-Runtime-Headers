// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONMEDIANEGOTIATOR_H
#define VCSESSIONMEDIANEGOTIATOR_H

@class NSMutableDictionary, NSString, NSArray;
@protocol VCMediaNegotiatorProtocol;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiatorLocalConfiguration.h"
#import "VCMediaNegotiatorResultsAudio.h"
#import "VCMediaNegotiatorResultsFaceTimeSettings.h"
#import "VCMediaNegotiatorResultsMoments.h"
#import "VCMediaNegotiatorResultsVideo.h"
#import "VCMediaNegotiatorResults.h"

@interface VCSessionMediaNegotiator : NSObject <VCMediaNegotiatorProtocol>

 {
    id<VCMediaNegotiatorProtocol> *_activeNegotiator;
    NSMutableDictionary *_mediaNegotiatorMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // ivar: _localSettings
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly) Class superclass;


+(BOOL)initializeLocalConfiguration:(id)arg0 negotiationData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3 ;
+(id)mediaBlobForVersion:(int)arg0 negotiationData:(id)arg1 ;
+(id)negotiationDataWithVersion1:(id)arg0 version2:(id)arg1 ;
+(id)negotiationDataWithVersion:(int)arg0 mediaBlob:(id)arg1 ;
+(id)serializeNegotiationData:(id)arg0 ;
+(id)unserializeNegotiationData:(id)arg0 ;
-(BOOL)processRemoteNegotiationData:(id)arg0 ;
-(id)initWithLocalConfiguration:(id)arg0 ;
-(id)negotiationData;
-(unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)dealloc;


@end


#endif