// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSHAREDLISTENINGCONNECTIONCONTROLLER_H
#define ICSHAREDLISTENINGCONNECTIONCONTROLLER_H

@class NSString, NSURL;
@protocol ICSharedListeningConnectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "ICLiveLinkIdentity.h"

@interface ICSharedListeningConnectionController : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (weak, nonatomic) NSObject<ICSharedListeningConnectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ICLiveLinkIdentity *identity; // ivar: _identity
@property (retain, nonatomic) NSURL *inviteURL; // ivar: _inviteURL
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSString *sessionToken; // ivar: _sessionToken


+(id)externalSharedListeningConnectionWithSessionIdentifier:(id)arg0 identity:(id)arg1 bundleID:(id)arg2 ;
+(id)sharedListeningConnectionWithSessionIdentifier:(id)arg0 identity:(id)arg1 bundleID:(id)arg2 ;
-(id)initWithSessionIdentifier:(id)arg0 identity:(id)arg1 bundleID:(id)arg2 ;
-(void)sendMessage:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif