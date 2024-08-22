// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLFEATUREFLAGS_H
#define MLFEATUREFLAGS_H

@class NSMutableDictionary, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface MLFeatureFlags : NSObject

@property (readonly, nonatomic) NSMutableDictionary *flags; // ivar: _flags
@property (readonly, nonatomic) NSMutableDictionary *overrideOriginalValues; // ivar: _overrideOriginalValues
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedFeatureFlags;
-(BOOL)isFeatureEnabled:(id)arg0 ;
-(BOOL)isMPSGraphEnabled;
-(BOOL)isMPSGraphFP16Enabled;
-(BOOL)removeOverrideForFeature:(id)arg0 ;
-(BOOL)setOverride:(BOOL)arg0 forFeature:(id)arg1 ;
-(id)controlKeyForFeature:(id)arg0 ;
-(id)init;
-(void)addFeature:(id)arg0 withControlName:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)defineFeatures;


@end


#endif