// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORRESULTSVIDEO_H
#define VCMEDIANEGOTIATORRESULTSVIDEO_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "VCVideoRuleCollections.h"

@interface VCMediaNegotiatorResultsVideo : NSObject

@property (nonatomic) unsigned int customVideoHeight; // ivar: _customVideoHeight
@property (nonatomic) unsigned int customVideoWidth; // ivar: _customVideoWidth
@property (retain, nonatomic) NSDictionary *featureStrings; // ivar: _featureStrings
@property (readonly, nonatomic) NSSet *hdrModesNegotiated; // ivar: _hdrModesNegotiated
@property (nonatomic) BOOL isRTCPFBEnabled; // ivar: _isRTCPFBEnabled
@property (nonatomic) BOOL isSupported; // ivar: _isSupported
@property (nonatomic) BOOL ltrpEnabled; // ivar: _ltrpEnabled
@property (retain, nonatomic) NSDictionary *parameterSets; // ivar: _parameterSets
@property (readonly, nonatomic) NSSet *pixelFormats; // ivar: _pixelFormats
@property (nonatomic) unsigned int remoteSSRC; // ivar: _remoteSSRC
@property (nonatomic) unsigned int tilesPerFrame; // ivar: _tilesPerFrame
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections; // ivar: _videoRuleCollections


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(void)addFeatureString:(id)arg0 payload:(int)arg1 ;
-(void)addNegotiatedHDRMode:(id)arg0 ;
-(void)addParameterSet:(id)arg0 payload:(int)arg1 ;
-(void)addPixelFormatSet:(id)arg0 ;
-(void)addVideoRules:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(void)dealloc;


@end


#endif