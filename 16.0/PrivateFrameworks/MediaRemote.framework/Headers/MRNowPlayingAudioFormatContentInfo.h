// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGAUDIOFORMATCONTENTINFO_H
#define MRNOWPLAYINGAUDIOFORMATCONTENTINFO_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>

#import "_MRMRNowPlayingAudioFormatContentInfoProtobuf.h"

@interface MRNowPlayingAudioFormatContentInfo : NSObject

@property (readonly, nonatomic) NSNumber *audioFormat; // ivar: _audioFormat
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, nonatomic) NSNumber *audioSessionID; // ivar: _audioSessionID
@property (readonly, nonatomic) NSInteger bestAvailableAudioFormat;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic) NSString *bestAvailableContent; // ivar: _bestAvailableContent
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSNumber *channelCount; // ivar: _channelCount
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization; // ivar: _eligibleForSpatialization
@property (nonatomic) NSInteger intendedSpatialExperience; // ivar: _intendedSpatialExperience
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
@property (nonatomic) NSInteger resolvedSpatialExperience; // ivar: _resolvedSpatialExperience
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized; // ivar: _spatialized


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 audioSessionID:(id)arg1 audioFormat:(id)arg2 channelCount:(id)arg3 bestAvailableContent:(id)arg4 isEligibleForSpatialization:(id)arg5 isSpatialized:(id)arg6 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif