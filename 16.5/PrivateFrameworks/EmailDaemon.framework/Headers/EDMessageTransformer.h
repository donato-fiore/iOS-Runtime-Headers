// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMESSAGETRANSFORMER_H
#define EDMESSAGETRANSFORMER_H

@class EMBlockedSenderManager, NSString;
@protocol EFLoggable, EMUserProfileProvider, EMVIPReader;

#import <Foundation/Foundation.h>

#import "EDMailboxProvider.h"

@interface EDMessageTransformer : NSObject <EFLoggable>



@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDMailboxProvider *mailboxProvider; // ivar: _mailboxProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider
@property (readonly, nonatomic) NSObject<EMVIPReader> *vipReader; // ivar: _vipReader


+(id)log;
+(id)mailboxesForPersistedMessage:(id)arg0 mailboxProvider:(id)arg1 ;
-(id)_transformBaseMessage:(id)arg0 mailboxScope:(id)arg1 duplicateInfo:(id)arg2 loaderBlock:(id)arg3 ;
-(id)initWithMailboxProvider:(id)arg0 userProfileProvider:(id)arg1 blockedSenderManager:(id)arg2 vipReader:(id)arg3 ;
-(id)transformBaseMessage:(id)arg0 mailboxScope:(id)arg1 loaderBlock:(id)arg2 ;
-(id)transformPersistedMessages:(id)arg0 mailboxScope:(id)arg1 ;


@end


#endif