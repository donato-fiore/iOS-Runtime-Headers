// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSFOLLOWUPCONTROLLER_H
#define SSFOLLOWUPCONTROLLER_H

@class FLFollowUpController;

#import <Foundation/Foundation.h>


@interface SSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController; // ivar: _followUpController


+(id)sharedController;
-(id)_createFollowUpItemForIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg0 ;
-(id)_dismissFollowUpWithIdentifier:(id)arg0 ;
-(id)_postFollowUpWithIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(id)dismissFollowUpWithIdentifier:(id)arg0 ;
-(id)dismissFollowUpWithIdentifier:(id)arg0 account:(id)arg1 ;
-(id)init;
-(id)pendingFollowUpWithIdentifier:(id)arg0 ;
-(id)postFollowUpWithIdentifier:(id)arg0 account:(id)arg1 userInfo:(id)arg2 ;
-(id)postFollowUpWithIdentifier:(id)arg0 userInfo:(id)arg1 ;


@end


#endif