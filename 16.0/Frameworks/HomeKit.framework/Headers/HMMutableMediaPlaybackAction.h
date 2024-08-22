// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLEMEDIAPLAYBACKACTION_H
#define HMMUTABLEMEDIAPLAYBACKACTION_H

@class NSSet, MPPlaybackArchive, NSNumber;
@protocol NSCopying;


#import "HMMediaPlaybackAction.h"

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction <NSCopying>



@property (copy, nonatomic) NSSet *mediaProfiles;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;
@property (nonatomic) NSInteger state;
@property (copy, nonatomic) NSNumber *volume;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif