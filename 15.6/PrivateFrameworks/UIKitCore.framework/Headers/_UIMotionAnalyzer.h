// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMOTIONANALYZER_H
#define _UIMOTIONANALYZER_H


#import <Foundation/Foundation.h>

#import "_UIMotionAnalyzerSettings.h"
#import "_UIViewerRelativeDevicePose.h"

@interface _UIMotionAnalyzer : NSObject

@property (readonly, nonatomic) _UIMotionAnalyzerSettings *settings; // ivar: _settings
@property (readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // ivar: _viewerRelativeDevicePose


-(BOOL)applyHysteresisWithReceivedEventTimestamp:(CGFloat)arg0 timeSinceLastNewMotionEvent:(CGFloat)arg1 slowUpdatesEnabled:(BOOL)arg2 returningShouldToggleSlowUpdates:(*BOOL)arg3 logger:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)reset;
-(void)resetHysteresis;
-(void)updateHistory;
-(void)updateWithEvent:(id)arg0 ;


@end


#endif