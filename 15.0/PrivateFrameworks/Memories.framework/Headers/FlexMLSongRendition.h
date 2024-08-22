// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXMLSONGRENDITION_H
#define FLEXMLSONGRENDITION_H



#import "FMSongRendition.h"
#import "FlexMLSummary.h"

@interface FlexMLSongRendition : FMSongRendition

@property (retain, nonatomic) FlexMLSummary *summary; // ivar: _summary


-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg0 options:(id)arg1 andSummary:(id)arg2 forDuration:(struct ? )arg3 ;
-(void)_buildTracks;
-(void)_calculateDuration:(struct ? )arg0 ;


@end


#endif