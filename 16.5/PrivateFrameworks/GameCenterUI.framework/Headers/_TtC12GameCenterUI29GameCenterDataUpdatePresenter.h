// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI29GAMECENTERDATAUPDATEPRESENTER_H
#define _TTC12GAMECENTERUI29GAMECENTERDATAUPDATEPRESENTER_H

@protocol GKDaemonProxyDataUpdateDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12GameCenterUI29GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate>

 {
    ? onGameCenterDataUpdate;
}




-(id)init;
-(void)dealloc;
-(void)friendRequestSelected:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)refreshFriendContents:(id)arg0 ;
-(void)setBadgeCount:(NSInteger)arg0 forType:(NSUInteger)arg1 ;


@end


#endif