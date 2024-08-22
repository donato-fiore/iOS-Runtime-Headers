// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUREALTIMEDRAWINGBASEVIEWCONTROLLER_H
#define AUREALTIMEDRAWINGBASEVIEWCONTROLLER_H

@class NSTimer, NSNumberFormatter;


#import "AUAppleViewControllerBase.h"

@interface AURealtimeDrawingBaseViewController : AUAppleViewControllerBase {
    NSTimer *meterTimer;
    NSNumberFormatter *decimalFormatter;
}


@property (readonly) unsigned int numChannels; // ivar: numChannels
@property CGFloat realtimeDrawingInterval; // ivar: realtimeDrawingInterval


-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(unsigned int)getNumChannelsFromAudioUnit;
-(void)checkLastRenderedTime:(id)arg0 ;
-(void)cleanup;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)priv_removeListeners;
-(void)setAU:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)setNeedsRealtimeDrawing:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif