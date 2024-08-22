// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPNOWPLAYINGINFOAUDIOFORMAT_H
#define MPNOWPLAYINGINFOAUDIOFORMAT_H

@class NSString, MRContentItemMetadataAudioFormat;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoAudioFormat : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) NSInteger badging;
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


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForChannelLayoutTag:(unsigned int)arg0 ;
-(id)debugBitDepthDescription;
-(id)debugBitRateDescription;
-(id)debugChannelCountDescription;
-(id)debugChannelLayoutDescription;
-(id)debugCodecDescription;
-(id)debugSampleRateDescription;
-(id)debugTierDescription;
-(id)description;
-(id)humanDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaRemoteAudioFormat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif