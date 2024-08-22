// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMLIGHTPROFILE_H
#define HMLIGHTPROFILE_H

@class NSString;
@protocol HMFLogging, HMLightProfileDelegate;


#import "HMAccessoryProfile.h"
#import "_HMLightProfile.h"
#import "HMLightProfileSettings.h"

@interface HMLightProfile : HMAccessoryProfile <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMLightProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) _HMLightProfile *lightProfile;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMLightProfileSettings *settings;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)initWithLightProfile:(id)arg0 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)setNaturalLightingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg0 shouldRetryOnFailure:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateSettings:(id)arg0 withReason:(id)arg1 ;


@end


#endif