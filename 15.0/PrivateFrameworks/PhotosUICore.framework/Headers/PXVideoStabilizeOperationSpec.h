// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOSTABILIZEOPERATIONSPEC_H
#define PXVIDEOSTABILIZEOPERATIONSPEC_H



#import "PXVideoProcessingOperationSpec.h"
#import "PXVideoStabilizationRecipeSource.h"

@interface PXVideoStabilizeOperationSpec : PXVideoProcessingOperationSpec

@property (nonatomic) BOOL abortIfStabilizationFails; // ivar: _abortIfStabilizationFails
@property (nonatomic) ? crossfadeDuration; // ivar: _crossfadeDuration
@property (nonatomic) BOOL performStabilization; // ivar: _performStabilization
@property (retain, nonatomic) PXVideoStabilizationRecipeSource *recipeSource; // ivar: _recipeSource
@property (nonatomic) ? startTime; // ivar: _startTime
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) BOOL wantsAudio; // ivar: _wantsAudio


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif