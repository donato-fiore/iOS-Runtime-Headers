// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCDUALSENSEADAPTIVETRIGGER_H
#define GCDUALSENSEADAPTIVETRIGGER_H

@protocol GCControllerHIDInfo, GCAdaptiveTriggers;


#import "GCControllerButtonInput.h"
#import "_GCControllerManagerAppClient.h"

@interface GCDualSenseAdaptiveTrigger : GCControllerButtonInput {
    _GCControllerManagerAppClient *_controllerManagerApp;
    id<GCControllerHIDInfo> *_hidInfo;
    id<GCAdaptiveTriggers> *_adaptiveTriggers;
}


@property (nonatomic) float armPosition; // ivar: _armPosition
@property (nonatomic) int index; // ivar: _index
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSInteger status; // ivar: _status


-(void)dealloc;
-(void)locateAdaptiveTriggerComponent;
-(void)locateControllerManagerApp;
-(void)observeChangesForAdaptiveTriggers:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendAdaptiveTriggerPayload:(id)arg0 ;
-(void)sendAdaptiveTriggerPayloadDict:(id)arg0 ;
-(void)stopObservingChangesForAdaptiveTriggers:(id)arg0 ;
-(void)updateStatus;


@end


#endif