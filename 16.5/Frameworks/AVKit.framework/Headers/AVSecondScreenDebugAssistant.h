// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSECONDSCREENDEBUGASSISTANT_H
#define AVSECONDSCREENDEBUGASSISTANT_H

@class CADisplay, NSString, AVPlayer, UIScene;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVSecondScreenViewController.h"

@interface AVSecondScreenDebugAssistant : NSObject

@property (retain, nonatomic) CADisplay *debugInfoDisplay; // ivar: _debugInfoDisplay
@property (copy, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (weak, nonatomic) UIScene *scene; // ivar: _scene
@property (weak, nonatomic) AVSecondScreenViewController *secondScreenViewController; // ivar: _secondScreenViewController


-(id)_currentDisplay;
-(id)_currentEnabledVideoTrack;
-(id)_currentVideoDynamicRange;
-(id)init;
-(void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg0 currentVideoDynamicRange:(id)arg1 ;
-(void)_updateDebugLabelText;
-(void)dealloc;


@end


#endif