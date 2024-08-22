// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFOLLOWUP_H
#define AMSFOLLOWUP_H

@class FLFollowUpController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController; // ivar: _followUpController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue; // ivar: _followUpQueue


-(id)_pendingFollowUpWithBackingIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)clearFollowUpItem:(id)arg0 ;
-(id)clearFollowUpWithBackingIdentifier:(id)arg0 ;
-(id)clearFollowUpWithIdentifier:(id)arg0 account:(id)arg1 ;
-(id)init;
-(id)pendingFollowUpWithIdentifier:(id)arg0 account:(id)arg1 ;
-(id)pendingFollowUps;
-(id)pendingFollowUpsForAccount:(id)arg0 ;
-(id)postFollowUpItem:(id)arg0 ;


@end


#endif