// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCSAVAILABILITY_H
#define TCSAVAILABILITY_H

@class NSUserDefaults, NPSManager;

#import <Foundation/Foundation.h>


@interface TCSAvailability : NSObject {
    NSUserDefaults *_tinCanDefaults;
    NPSManager *_npsManager;
}


@property (nonatomic) BOOL shouldObserveFriendListDefaultChanges; // ivar: _shouldObserveFriendListDefaultChanges
@property (nonatomic) BOOL shouldObserveUnavailabilityDefaultChanges; // ivar: _shouldObserveUnavailabilityDefaultChanges
@property (nonatomic) BOOL shouldShowStatusIndicator; // ivar: _shouldShowStatusIndicator


+(BOOL)isUserAvailable;
+(BOOL)shouldShowWalkieTalkieStatusIndicator;
+(id)sharedInstance;
+(void)setUserAvailable:(BOOL)arg0 ;
-(BOOL)_calculateShouldShowStatusIndicator;
-(BOOL)_hasConnectivity;
-(BOOL)_isUserUnavailable;
-(id)_unavailabilityText:(BOOL)arg0 ;
-(id)init;
-(void)_handleDeviceFirstUnlock;
-(void)_postNotificationName:(id)arg0 ;
-(void)_setUserUnavailable:(BOOL)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif