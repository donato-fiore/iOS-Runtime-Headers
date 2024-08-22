// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSICTRANSPORTABLEEXTENSION2_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSICTRANSPORTABLEEXTENSION2_H

@class NSArray, NSDictionary, NSString;
@protocol MPCQueueControllerBehaviorTransportableExtension, MPCPlaybackAccountManagerObserver, MPCQueueControllerSessionTypesInvalidatable;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerBehaviorMusicTransportableExtension2 : NSObject <MPCQueueControllerBehaviorTransportableExtension, MPCPlaybackAccountManagerObserver>

 {
    NSArray *_accounts;
    NSArray *_allKnownSessionInfos;
    NSDictionary *_sessionInfoMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerSessionTypesInvalidatable> *sessionTypesInvalidatable; // ivar: _sessionTypesInvalidatable
@property (readonly) Class superclass;


-(BOOL)isSupportedSessionType:(id)arg0 reason:(*id)arg1 ;
-(id)allKnownSessionTypes;
-(id)infoForSessionType:(id)arg0 ;
-(id)initWithInvalidatable:(id)arg0 ;
-(void)_updateAllKnownSessionInfosForAccounts:(id)arg0 ;
-(void)accountManager:(id)arg0 didChangeAccounts:(id)arg1 ;


@end


#endif