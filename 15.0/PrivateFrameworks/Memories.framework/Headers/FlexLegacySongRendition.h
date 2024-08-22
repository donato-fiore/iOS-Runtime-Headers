// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXLEGACYSONGRENDITION_H
#define FLEXLEGACYSONGRENDITION_H

@class NSArray;


#import "FMSongRendition.h"

@interface FlexLegacySongRendition : FMSongRendition

@property (nonatomic) NSInteger durationOfFullOutro; // ivar: _durationOfFullOutro
@property (nonatomic) NSInteger durationOfUsedOutro; // ivar: _durationOfUsedOutro
@property (retain, nonatomic) NSArray *segments; // ivar: _segments


+(NSInteger)_durationOfOutroForPlaylist:(id)arg0 onlyUsedDuration:(BOOL)arg1 ;
-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg0 segments:(id)arg1 withOptions:(id)arg2 ;
-(void)_buildTracksFromSegments:(id)arg0 ;


@end


#endif