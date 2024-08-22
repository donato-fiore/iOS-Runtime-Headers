// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDDEVICEISMUTEDHEURISTIC_H
#define MDDEVICEISMUTEDHEURISTIC_H

@class AFNotifyObserver;
@protocol MDModeHeuristic;

#import <Foundation/Foundation.h>

#import "MDModeDecision.h"

@interface MDDeviceIsMutedHeuristic : NSObject <MDModeHeuristic>

 {
    AFNotifyObserver *_ringerStateObserver;
    MDModeDecision *_displayOnlyModeDecision;
}




-(BOOL)isDeviceSilentMode;
-(id)determineCurrentMode;
-(id)init;
-(id)initWithRingerStateObserver:(id)arg0 ;


@end


#endif