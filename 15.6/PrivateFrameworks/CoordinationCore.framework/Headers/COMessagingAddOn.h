// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESSAGINGADDON_H
#define COMESSAGINGADDON_H

@protocol COMessagingAddOnDelegate;


#import "COMeshAddOn.h"

@interface COMessagingAddOn : COMeshAddOn {
    os_unfair_lock_s _lock;
}


@property (weak) NSObject<COMessagingAddOnDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_handleRequest:(id)arg0 callback:(id)arg1 ;
-(void)_withLock:(id)arg0 ;
// -(void)broadcastRequest:(id)arg0 recipientsCallback:(id)arg1 completionHandler:(unk)arg2  ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)sendRequest:(id)arg0 members:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)willRemoveFromMeshController:(id)arg0 ;


@end


#endif