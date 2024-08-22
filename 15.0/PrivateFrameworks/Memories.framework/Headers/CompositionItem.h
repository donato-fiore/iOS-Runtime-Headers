// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPOSITIONITEM_H
#define COMPOSITIONITEM_H


#import <Foundation/Foundation.h>

#import "KonaClip.h"

@interface CompositionItem : NSObject

@property (nonatomic) ? audioEndOffset; // ivar: m_audioEndOffset
@property (nonatomic) ? audioStartOffset; // ivar: m_audioStartOffset
@property (retain, nonatomic) KonaClip *clip; // ivar: _clip
@property (nonatomic) ? destinationDuration; // ivar: m_destinationDuration
@property (readonly, nonatomic) BOOL hasVideoContent;
@property (nonatomic) BOOL isFinalClip; // ivar: m_isFinalClip
@property (readonly, nonatomic) BOOL isFreezeFrame; // ivar: m_isFreezeFrame
@property (readonly, nonatomic) BOOL isMuted; // ivar: m_isMuted
@property (nonatomic) ? leftTransitionExtension; // ivar: m_leftTransitionExtension
@property (nonatomic) ? rightTransitionExtension; // ivar: m_rightTransitionExtension
@property (nonatomic) ? sourceTimeRange; // ivar: m_sourceTimeRange
@property (nonatomic) float speed; // ivar: m_speed


+(id)compositionItemWithClip:(id)arg0 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)debugDescription;
-(id)description;
-(id)emptyAudioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)emptyTrackSegmentWithDestinationRange:(struct ? )arg0 ;
-(id)emptyTrackSegmentWithDestinationTime:(struct ? )arg0 ;
-(id)emptyVideoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;
-(id)initWithClip:(id)arg0 ;
-(id)metaDataVideoAssetURL;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif