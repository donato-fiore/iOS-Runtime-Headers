// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19APPSTOREKITINTERNAL34GAMECENTERFRIENDREQUESTCOORDINATOR_H
#define _TTC19APPSTOREKITINTERNAL34GAMECENTERFRIENDREQUESTCOORDINATOR_H

@protocol GKDaemonProxyDataUpdateDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal34GameCenterFriendRequestCoordinator : NSObject <GKDaemonProxyDataUpdateDelegate>

 {
    ? onFriendRequestCountDidUpdate;
    ? currentFriendRequestCount;
}




-(id)init;
-(void)accountsDidChangeWithNotification:(id)arg0 ;
-(void)dealloc;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;


@end


#endif