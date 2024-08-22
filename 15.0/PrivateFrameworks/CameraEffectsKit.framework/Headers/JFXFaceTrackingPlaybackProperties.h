// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXFACETRACKINGPLAYBACKPROPERTIES_H
#define JFXFACETRACKINGPLAYBACKPROPERTIES_H


#import <Foundation/Foundation.h>

#import "JFXARMetadata.h"
#import "JFXFaceTrackedEffectTransform.h"

@interface JFXFaceTrackingPlaybackProperties : NSObject

@property (readonly, nonatomic) JFXARMetadata *arMetadata; // ivar: _arMetadata
@property (readonly, nonatomic) BOOL canTrackFace; // ivar: _canTrackFace
@property (readonly, nonatomic) JFXFaceTrackedEffectTransform *faceTrackingTransform; // ivar: _faceTrackingTransform
@property (readonly, nonatomic) NSInteger mediaInterfaceOrientationForDisplay; // ivar: _mediaInterfaceOrientationForDisplay
@property (readonly, nonatomic) ? mediaTimeRange; // ivar: _mediaTimeRange


-(BOOL)containsMediaTime:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 ;
-(id)initWithFaceTrackableMediaTimeRange:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 faceTrackingTransform:(id)arg2 arMetadata:(id)arg3 ;
-(id)initWithNonFaceTrackableMediaTimeRange:(struct ? )arg0 ;


@end


#endif