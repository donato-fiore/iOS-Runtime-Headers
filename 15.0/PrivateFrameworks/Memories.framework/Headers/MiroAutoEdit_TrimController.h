// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDIT_TRIMCONTROLLER_H
#define MIROAUTOEDIT_TRIMCONTROLLER_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroAutoEditLogger.h"
#import "Project.h"

@interface MiroAutoEdit_TrimController : NSObject

@property (nonatomic) BOOL allowMoreThanMaxVideo; // ivar: _allowMoreThanMaxVideo
@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (nonatomic) int duration; // ivar: _duration
@property (nonatomic) NSInteger durationRange; // ivar: _durationRange
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (nonatomic) int lastClipInPoint; // ivar: _lastClipInPoint
@property (nonatomic) int lastClipOutPoint; // ivar: _lastClipOutPoint
@property (readonly, nonatomic) MiroAutoEditLogger *logger; // ivar: _logger
@property (retain, nonatomic) Project *project; // ivar: _project
@property (retain, nonatomic) NSSet *suggestions; // ivar: _suggestions
@property (nonatomic) BOOL titleIsSupported; // ivar: _titleIsSupported
@property (nonatomic) BOOL useNonSpecialDurations; // ivar: _useNonSpecialDurations


+(id)rangeModelsBySplittingRangeModels:(id)arg0 outsideRange:(id)arg1 ;
-(BOOL)clipIsTitleCard:(id)arg0 ;
-(id)_rangesForClipIncorporatingUserTrim:(id)arg0 ;
-(id)_saveFreezeBits;
-(id)initWithProject:(id)arg0 blueprint:(id)arg1 titleIsSupported:(BOOL)arg2 freezeRanges:(id)arg3 duration:(CGFloat)arg4 durationRange:(NSInteger)arg5 suggestions:(id)arg6 ;
-(id)layoutProject;
-(int)durationOfUserTrimForClip:(id)arg0 ;
-(int)maximumBlueprintDurationForClip:(id)arg0 ;
-(int)minimumBlueprintDurationForClip:(id)arg0 ;
-(int)shrinkAndStretchClips:(id)arg0 ;
-(void)_clipClip:(id)arg0 ;
-(void)_fitToDuration;
-(void)calcLastClipInPointAndOutPoint;
-(void)setupSongDuration;


@end


#endif