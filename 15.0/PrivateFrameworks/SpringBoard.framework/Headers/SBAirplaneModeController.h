// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAIRPLANEMODECONTROLLER_H
#define SBAIRPLANEMODECONTROLLER_H

@class RadiosPreferences;
@protocol RadiosPreferencesDelegate, OS_dispatch_queue, SBAirplaneModeDelegate;

#import <Foundation/Foundation.h>


@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate>

 {
    RadiosPreferences *_radioPrefs;
    BOOL _cachedInAirplaneMode;
    NSObject<OS_dispatch_queue> *_radioQueue;
}


@property (weak, nonatomic) NSObject<SBAirplaneModeDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;


+(id)sharedInstance;
-(id)init;
-(void)airplaneModeChanged;


@end


#endif