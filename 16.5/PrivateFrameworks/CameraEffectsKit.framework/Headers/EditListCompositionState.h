// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDITLISTCOMPOSITIONSTATE_H
#define EDITLISTCOMPOSITIONSTATE_H

@protocol JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXCompositionTrackGroup.h"

@interface EditListCompositionState : NSObject

@property (retain, nonatomic) JFXCompositionTrackGroup *alternateTrackGroup; // ivar: _alternateTrackGroup
@property (nonatomic) ? audioCompTimeRange; // ivar: _audioCompTimeRange
@property (nonatomic) int audioEndOffset; // ivar: _audioEndOffset
@property (nonatomic) int audioStartOffset; // ivar: _audioStartOffset
@property (weak, nonatomic) NSObject<JFXPlayableElement> *clip; // ivar: _clip
@property (nonatomic) BOOL clipRequiresCA; // ivar: _clipRequiresCA
@property (retain, nonatomic) JFXCompositionTrackGroup *currentTrackGroup; // ivar: _currentTrackGroup
@property (nonatomic) BOOL isLastClip; // ivar: _isLastClip
@property (nonatomic) int overlapLeft; // ivar: _overlapLeft
@property (nonatomic) int overlapRight; // ivar: _overlapRight
@property (nonatomic) ? videoCompTimeRange; // ivar: _videoCompTimeRange


-(id)description;
-(void)swapTrackGroup;


@end


#endif