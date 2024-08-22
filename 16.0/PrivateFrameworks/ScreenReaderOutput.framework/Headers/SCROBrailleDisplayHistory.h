// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLEDISPLAYHISTORY_H
#define SCROBRAILLEDISPLAYHISTORY_H


#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayHistory : NSObject {
    *__CFArray _announcements;
    *__CFArray _unreadSnapshot;
    NSInteger _currentIndex;
    NSInteger _unreadCount;
}




+(void)initialize;
-(BOOL)_moveIndexBy:(NSInteger)arg0 ;
-(BOOL)hasUnread;
-(BOOL)isOnMostRecent;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(id)currentString;
-(id)init;
-(void)addString:(id)arg0 ;
-(void)dealloc;
-(void)markSnapshotAsRead;
-(void)moveToMostRecent;
-(void)snapshotUnread;


@end


#endif