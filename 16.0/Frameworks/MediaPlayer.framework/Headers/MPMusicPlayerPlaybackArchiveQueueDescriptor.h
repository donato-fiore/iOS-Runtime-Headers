// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERPLAYBACKARCHIVEQUEUEDESCRIPTOR_H
#define MPMUSICPLAYERPLAYBACKARCHIVEQUEUEDESCRIPTOR_H



#import "MPMusicPlayerQueueDescriptor.h"
#import "MPPlaybackArchive.h"

@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, copy, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackArchive:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif