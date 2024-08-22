// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSETTINGSAMSBAGTRACKER_H
#define WLKSETTINGSAMSBAGTRACKER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys; // ivar: _trackedBagKeys


+(id)sharedTracker;
-(BOOL)_amsBagBoolValueForKey:(id)arg0 ;
-(id)init;
-(id)isNowPlayingEnabled;
-(id)isSportsEnabled;
-(void)_setIsNowPlayingEnabled:(BOOL)arg0 ;
-(void)_setIsSportsEnabled:(BOOL)arg0 ;
-(void)_updateBoolValueForTrackedKey:(id)arg0 ;
-(void)_updateKeys:(id)arg0 ;
-(void)updateTrackedBagValues;
-(void)updateTrackedBagValuesWithChangedKeys:(id)arg0 ;


@end


#endif