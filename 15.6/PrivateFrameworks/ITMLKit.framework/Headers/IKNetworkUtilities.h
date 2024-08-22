// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKNETWORKUTILITIES_H
#define IKNETWORKUTILITIES_H

@class RadiosPreferences, NSString;
@protocol RadiosPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate>

 {
    id *_isNetworkTypeChangedToken;
    id *_networkReachabilityChangedToken;
    RadiosPreferences *_radioPrefs;
}


@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, nonatomic) CGFloat lastNetworkChangedTime;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *networkType;


+(id)sharedInstance;
-(id)init;
-(void)_notifyObservers;
-(void)airplaneModeChanged;
-(void)dealloc;


@end


#endif