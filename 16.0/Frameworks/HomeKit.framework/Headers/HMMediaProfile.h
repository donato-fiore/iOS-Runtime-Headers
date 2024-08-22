// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAPROFILE_H
#define HMMEDIAPROFILE_H

@class NSUUID, NSString;
@protocol _HMMediaProfileDelegate, HMAccessorySettingsContainerInternal, HMMediaObject, HMAccessorySettingsContainer, HMSleepWakeStateProvider, HMMediaProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMHome.h"
#import "HMMediaSession.h"
#import "HMAccessorySettings.h"

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMAccessorySettingsContainerInternal, HMMediaObject, HMAccessorySettingsContainer, HMSleepWakeStateProvider>



@property (readonly, nonatomic) NSUInteger capability; // ivar: _capability
@property (readonly, weak) HMHome *containerHome;
@property (readonly, weak) NSUUID *containerUUID;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;


-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)init;
-(id)initWithMediaProfile:(id)arg0 ;
-(void)fetchAccessorySleepWakeStateWithCompletion:(id)arg0 ;
-(void)mediaProfile:(id)arg0 didUpdateMediaSession:(id)arg1 ;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;


@end


#endif