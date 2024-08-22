// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCXPCTOKENCLIENT_H
#define BRCXPCTOKENCLIENT_H

@class NSString;
@protocol BRTokenProtocol;


#import "BRCXPCClient.h"

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)currentAccountCopyTokenWithBundleID:(id)arg0 version:(id)arg1 reply:(id)arg2 ;
-(void)fetchContainerPathForCurrentPersonaWithReply:(id)arg0 ;
-(void)fetchGroupContainerPathForCurrentPersonaWithReply:(id)arg0 ;
-(void)getPrimaryiCloudAccountStatus:(id)arg0 ;
-(void)prepareFileProvidersWithReply:(id)arg0 ;


@end


#endif