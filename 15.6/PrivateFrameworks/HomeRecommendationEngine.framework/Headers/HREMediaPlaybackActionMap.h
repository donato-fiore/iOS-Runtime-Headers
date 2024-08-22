// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREMEDIAPLAYBACKACTIONMAP_H
#define HREMEDIAPLAYBACKACTIONMAP_H

@class HFPlaybackArchive, NSNumber;


#import "HREActionMap.h"

@interface HREMediaPlaybackActionMap : HREActionMap

@property (retain, nonatomic) HFPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (nonatomic) NSInteger targetPlaybackState; // ivar: _targetPlaybackState
@property (retain, nonatomic) NSNumber *targetVolume; // ivar: _targetVolume


+(id)actionMapWithState:(NSInteger)arg0 volume:(id)arg1 playbackArchive:(id)arg2 ;
+(id)emptyMap;
+(id)statelessActionMapWithVolume:(id)arg0 playbackArchive:(id)arg1 ;
-(id)addingCondition:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flattenedMapEvaluatedForObject:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 volume:(id)arg1 playbackArchive:(id)arg2 ;
-(id)mergeWithActionMaps:(id)arg0 ;
-(void)mergeMap:(id)arg0 intoMap:(id)arg1 ;


@end


#endif