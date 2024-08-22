// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUINETWORKUTILITIES_H
#define VUINETWORKUTILITIES_H

@class RadiosPreferences, NSString;
@protocol RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUINetworkUtilities : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver>

 {
    RadiosPreferences *_radioPrefs;
}


@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *networkType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkUtilityQueue; // ivar: _networkUtilityQueue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_notifyObservers;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;


@end


#endif