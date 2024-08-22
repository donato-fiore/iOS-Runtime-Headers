// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCAPABILITYLEGACYSHIM_H
#define COCAPABILITYLEGACYSHIM_H

@class NSSet, RPCompanionLinkClient;
@protocol COCapabilityLegacyShimDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface COCapabilityLegacyShim : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSSet *availableCapabilities; // ivar: _availableCapabilities
@property (copy, nonatomic) NSSet *companionCapabilities; // ivar: _companionCapabilities
@property (getter=isCompanionQueryInProgress) BOOL companionQueryInProgress; // ivar: _companionQueryInProgress
@property (getter=isCompanionQueryIncompatible) BOOL companionQueryIncompatible; // ivar: _companionQueryIncompatible
@property (getter=isCompanionQueryNeeded) BOOL companionQueryNeeded; // ivar: _companionQueryNeeded
@property (getter=isCompanionQueryUnsuccessful) BOOL companionQueryUnsuccessful; // ivar: _companionQueryUnsuccessful
@property (readonly, weak, nonatomic) NSObject<COCapabilityLegacyShimDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) RPCompanionLinkClient *rapport; // ivar: _rapport
@property (readonly, nonatomic) NSSet *supportedCapabilities; // ivar: _supportedCapabilities


-(BOOL)_isStereoPairMember;
-(BOOL)_isStereoPeer:(id)arg0 ;
-(BOOL)_isStereoPeerActive;
-(BOOL)_messageValidateRequest:(id)arg0 ;
-(BOOL)_messageValidateResponse:(id)arg0 ;
-(BOOL)_rapportEventShouldUpdateState:(id)arg0 ;
-(id)_messageCreateRequest;
-(id)_messageCreateResponse;
-(id)_messageDecodeCapabilities:(id)arg0 ;
-(id)_messageEncodeCapabilities;
-(id)initWithDelegate:(id)arg0 ;
-(void)_notifyDelegate:(id)arg0 ;
-(void)_rapportProcessRequest:(id)arg0 emittingResponse:(id)arg1 ;
-(void)_rapportProcessResponse:(id)arg0 error:(id)arg1 ;
-(void)_stateQuery;
-(void)_stateUpdate;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;


@end


#endif