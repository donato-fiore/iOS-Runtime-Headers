// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMPCSESSIONDATA_H
#define HMDMPCSESSIONDATA_H

@class HMFObject, NSString, NSSet, MPPlaybackArchive, NSNumber;



@interface HMDMPCSessionData : HMFObject

@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy, nonatomic) NSSet *mediaProfiles; // ivar: _mediaProfiles
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (readonly, nonatomic) BOOL playbackArchiveTargetsSystemMediaApplication;
@property (readonly, copy, nonatomic) NSNumber *playbackStateNumber; // ivar: _playbackStateNumber
@property (readonly, copy, nonatomic) NSNumber *playbackVolumeNumber; // ivar: _playbackVolumeNumber
@property (readonly, copy, nonatomic) NSNumber *source; // ivar: _source


-(id)dictionaryRepresentation:(BOOL)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 profileSource:(id)arg1 ;
-(id)initWithMediaAction:(id)arg0 source:(id)arg1 clientName:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg0 playbackState:(id)arg1 playbackVolume:(id)arg2 playbackArchive:(id)arg3 source:(id)arg4 clientName:(id)arg5 ;


@end


#endif