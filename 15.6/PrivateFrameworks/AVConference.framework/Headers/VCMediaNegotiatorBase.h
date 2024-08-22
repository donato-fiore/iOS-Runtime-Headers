// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATORBASE_H
#define VCMEDIANEGOTIATORBASE_H

@class NSString, NSArray;
@protocol VCMediaNegotiatorProtocol;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiatorLocalConfiguration.h"
#import "VCMediaNegotiatorResultsAudio.h"
#import "VCMediaNegotiatorResultsFaceTimeSettings.h"
#import "VCMediaNegotiatorResultsMoments.h"
#import "VCMediaNegotiatorResultsVideo.h"
#import "VCMediaNegotiatorResults.h"

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol>



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
-(BOOL)processRemoteNegotiationData:(id)arg0 ;
-(id)getPreferredVideoPayloadList:(id)arg0 ;
-(id)initWithLocalSettings:(id)arg0 ;
-(id)negotiationData;
-(unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)dealloc;


@end


#endif