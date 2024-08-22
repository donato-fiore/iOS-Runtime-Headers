// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCMEDIASTREAMNEGOTIATORSETTINGS_H
#define AVCMEDIASTREAMNEGOTIATORSETTINGS_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiatorAudioConfiguration.h"
#import "VCVideoRuleCollections.h"

@interface AVCMediaStreamNegotiatorSettings : NSObject

@property (readonly, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration; // ivar: _audioConfiguration
@property (readonly, nonatomic) NSInteger audioStreamMode;
@property (readonly, nonatomic) NSInteger captureSource;
@property (readonly, nonatomic) NSArray *hdrModePixelFormats;
@property (readonly, nonatomic) NSSet *hdrModesSupported;
@property (readonly, nonatomic) unsigned int localSSRC; // ivar: _localSSRC
@property (readonly, nonatomic) NSUInteger minBandwidth;
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) int preferredAudioCodec;
@property (readonly, nonatomic) NSUInteger ptime;
@property (readonly, nonatomic) VCVideoRuleCollections *screenRuleCollections; // ivar: _screenRuleCollections
@property (readonly, nonatomic) NSInteger tilesPerFrame;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections; // ivar: _videoRuleCollections
@property (readonly, nonatomic) NSInteger videoStreamMode;


+(NSUInteger)hdrModeWithOptions:(id)arg0 ;
+(id)negotiatorSettingsForMode:(NSInteger)arg0 deviceRole:(unsigned char)arg1 options:(id)arg2 errorString:(*id)arg3 ;
-(id)init;
-(id)initWithOptions:(id)arg0 deviceRole:(unsigned char)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif