// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPNOWPLAYINGINFOAUDIOFORMAT_H
#define MPNOWPLAYINGINFOAUDIOFORMAT_H

@class NSString, MRContentItemMetadataAudioFormat;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoAudioFormat : NSObject

@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (nonatomic) NSInteger bitDepth;
@property (nonatomic) NSInteger bitrate;
@property (nonatomic) unsigned int channelLayout;
@property (nonatomic) unsigned int codec;
@property (copy, nonatomic) NSString *groupID;
@property (readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat; // ivar: _mediaRemoteAudioFormat
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;
@property (copy, nonatomic) NSString *stableVariantID;
@property (nonatomic) NSInteger tier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithMediaRemoteAudioFormat:(id)arg0 ;


@end


#endif