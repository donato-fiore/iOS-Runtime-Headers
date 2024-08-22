// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHREMOTETEMPLATEAVAILABILITYLISTENER_H
#define ACHREMOTETEMPLATEAVAILABILITYLISTENER_H

@class NSString, HDProfile;
@protocol HDHealthDaemonReadyObserver, ACHRemoteTemplateAvailabilityListenerDelegate;

#import <Foundation/Foundation.h>

#import "ACHTemplateStore.h"

@interface ACHRemoteTemplateAvailabilityListener : NSObject <HDHealthDaemonReadyObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHRemoteTemplateAvailabilityListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore


-(BOOL)_isKeyACHAvailabilityStateKey:(id)arg0 ;
-(id)initWithProfile:(id)arg0 templateStore:(id)arg1 ;
-(void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)arg0 ;
-(void)_updateRemoteTemplateAvailabilityOnPairedDevice;
-(void)daemonReady:(id)arg0 ;


@end


#endif