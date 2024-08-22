// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLIVEPHOTOTRIMSCRUBBERSNAPSTRIPCONTROLLER_H
#define PXLIVEPHOTOTRIMSCRUBBERSNAPSTRIPCONTROLLER_H


#import <Foundation/Foundation.h>

#import "PXSnapStripView.h"
#import "PXLivePhotoTrimScrubberSnapStripControllerSpec.h"
#import "PXLivePhotoTrimScrubber.h"

@interface PXLivePhotoTrimScrubberSnapStripController : NSObject

@property (nonatomic) BOOL allowStartEndTimeSnapIndicators; // ivar: _allowStartEndTimeSnapIndicators
@property (retain, nonatomic) PXSnapStripView *snapStripView; // ivar: _snapStripView
@property (retain, nonatomic) PXLivePhotoTrimScrubberSnapStripControllerSpec *spec; // ivar: _spec
@property (retain, nonatomic) PXLivePhotoTrimScrubber *trimScrubber; // ivar: _trimScrubber


-(id)_snapIndicatorInfosForTimes:(id)arg0 currentTime:(struct ? )arg1 style:(NSUInteger)arg2 skipSingleIndicatorWithCurrentTime:(BOOL)arg3 skipDefaultTimeIndicator:(BOOL)arg4 ;
-(id)_snapIndicatorInfosForTimes:(id)arg0 currentTime:(struct ? )arg1 suggestedTime:(struct ? )arg2 style:(NSUInteger)arg3 skipSingleIndicatorWithCurrentTime:(BOOL)arg4 skipDefaultTimeIndicator:(BOOL)arg5 ;
-(void)updateSnapStripView;
-(void)updateSnapStripViewAnimated:(BOOL)arg0 ;


@end


#endif