// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPROFILEMANAGER_H
#define HDPROFILEMANAGER_H

@class NSMutableDictionary, HKObserverSet<HDProfileManagerObserver>;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDProfileManager : NSObject {
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    HKObserverSet<HDProfileManagerObserver> *_observers;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}




-(BOOL)createProfileForIdentifier:(id)arg0 displayName:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteProfile:(id)arg0 error:(*id)arg1 ;
-(id)allProfileIdentifiers;
-(id)createProfileForIdentifier:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 error:(*id)arg3 ;
-(id)createProfileOfType:(NSInteger)arg0 displayName:(id)arg1 error:(*id)arg2 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)newProfileWithIdentifier:(id)arg0 daemon:(id)arg1 directoryPath:(id)arg2 ;
-(id)profileAssociatedWithNRDeviceUUID:(id)arg0 ;
-(id)profileForIdentifier:(id)arg0 ;
-(id)profileIdentifierForUUID:(id)arg0 ;
-(void)addProfile:(id)arg0 ;
-(void)addProfileManagerObserver:(id)arg0 ;
-(void)addProfileManagerObserver:(id)arg0 queue:(id)arg1 ;
-(void)dispatchProfileListDidChange;
-(void)invalidateAndWaitWithReason:(id)arg0 ;
-(void)reloadSecondaryProfiles;
-(void)removeProfileManagerObserver:(id)arg0 ;


@end


#endif