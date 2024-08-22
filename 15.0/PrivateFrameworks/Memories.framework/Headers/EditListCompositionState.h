// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDITLISTCOMPOSITIONSTATE_H
#define EDITLISTCOMPOSITIONSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CompositionTrackGroup.h"
#import "KonaClip.h"

@interface EditListCompositionState : NSObject <NSCopying>



@property (retain, nonatomic) CompositionTrackGroup *alternateTrackGroup; // ivar: m_alternateTrackGroup
@property (nonatomic) ? audioCompTimeRange; // ivar: m_audioCompTimeRange
@property (nonatomic) int audioEndOffset; // ivar: m_audioEndOffset
@property (nonatomic) int audioStartOffset; // ivar: m_audioStartOffset
@property (nonatomic) KonaClip *clip; // ivar: m_clip
@property (nonatomic) CGSize clipNaturalSize; // ivar: m_clipNaturalSize
@property (nonatomic) BOOL clipRequiresCA; // ivar: m_clipRequiresCA
@property (nonatomic) CGAffineTransform clipTransform; // ivar: m_clipTransform
@property (readonly, nonatomic) int clipType; // ivar: m_clipType
@property (nonatomic) float clipVolume; // ivar: m_clipVolume
@property (retain, nonatomic) CompositionTrackGroup *currentTrackGroup; // ivar: m_currentTrackGroup
@property (nonatomic) KonaClip *nextClip; // ivar: m_nextClip
@property (nonatomic) CGSize nextClipNaturalSize; // ivar: m_nextClipNaturalSize
@property (nonatomic) BOOL nextClipRequiresCA; // ivar: m_nextClipRequiresCA
@property (nonatomic) CGAffineTransform nextClipTransform; // ivar: m_nextClipTransform
@property (readonly, nonatomic) int nextClipType; // ivar: m_nextClipType
@property (nonatomic) float nextClipVolume; // ivar: m_nextClipVolume
@property (nonatomic) KonaClip *previousClip; // ivar: m_previousClip
@property (nonatomic) CGSize previousClipNaturalSize; // ivar: m_previousClipNaturalSize
@property (nonatomic) BOOL previousClipRequiresCA; // ivar: m_previousClipRequiresCA
@property (nonatomic) CGAffineTransform previousClipTransform; // ivar: m_previousClipTransform
@property (readonly, nonatomic) int previousClipType; // ivar: m_previousClipType
@property (nonatomic) float previousClipVolume; // ivar: m_previousClipVolume
@property (nonatomic) ? videoCompTimeRange; // ivar: m_videoCompTimeRange


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)swapForTransition;


@end


#endif