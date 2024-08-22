// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDAUDIOACCESSORYHEURISTIC_H
#define MDAUDIOACCESSORYHEURISTIC_H

@class AFNotifyObserver, AVOutputContext;
@protocol MDModeHeuristic;

#import <Foundation/Foundation.h>

#import "MDModeDecision.h"

@interface MDAudioAccessoryHeuristic : NSObject <MDModeHeuristic>

 {
    BOOL _connectedToAudioAccessory;
    AFNotifyObserver *_connectedOutputDevicesObserver;
    AVOutputContext *_sharedSystemAudioContext;
    MDModeDecision *_modeDecisionBasedOnAudioAccessory;
}




-(BOOL)isConnectedToAudioAccessory;
-(id)determineCurrentMode;
-(id)init;
-(void)_connectedOutputDevicesDidChange:(id)arg0 ;
-(void)_fetchConnectedAudioAccessoryState;


@end


#endif