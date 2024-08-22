// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUAPPLEVIEWCONTROLLERBASE_H
#define AUAPPLEVIEWCONTROLLERBASE_H

@class UIViewController, NSArray, UIColor;



@interface AUAppleViewControllerBase : UIViewController {
    *AUListenerBase eventListener;
    CGFloat lastRenderedSampleTime;
    BOOL auRendering;
    BOOL initialized;
    *OpaqueAudioComponentInstance AU;
    NSArray *topLevelObjects;
}


@property BOOL needsRealtimeDrawing; // ivar: _needsRealtimeDrawing
@property CGFloat realtimeDrawingInterval; // ivar: _realtimeDrawingInterval
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)customViewLogger;
+(id)getLocalizedString:(id)arg0 ;
-(struct AudioUnitParameterInfo )getParameterInfo:(unsigned int)arg0 scope:(unsigned int)arg1 ;
-(struct OpaqueAudioComponentInstance *)au;
-(void)cleanup;
-(void)doRealtimeDrawing;
-(void)handleBeginGesture:(unsigned int)arg0 ;
-(void)handleEndGesture:(unsigned int)arg0 ;
-(void)handleParameterListChanged;
-(void)postBeginGestureNotificationForParameter:(unsigned int)arg0 ;
-(void)postEndGestureNotificationForParameter:(unsigned int)arg0 ;
-(void)prepareData;
-(void)priv_addListenerForParameter:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)priv_removeListenerForParameter:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(void)priv_removeListeners;
-(void)registerParameters;
-(void)setAU:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)synchronizeUIWithParameterValues;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif