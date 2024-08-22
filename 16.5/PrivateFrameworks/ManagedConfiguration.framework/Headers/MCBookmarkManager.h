// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCBOOKMARKMANAGER_H
#define MCBOOKMARKMANAGER_H

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCBookmarkManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSArray *memberQueueCurrentUserBookmarks; // ivar: _memberQueueCurrentUserBookmarks
@property (retain, nonatomic) NSDictionary *memberQueueStashedBookmarksByLabel; // ivar: _memberQueueStashedBookmarksByLabel
@property (nonatomic) int notificationToken; // ivar: _notificationToken
@property (copy, nonatomic) NSArray *userBookmarks;


+(id)sharedManager;
-(id)init;
-(void)memberQueueSetStashedUserBookmarksByLabel:(id)arg0 ;
-(void)memberQueueSetUserBookmarks:(id)arg0 ;
-(void)memberQueueStashUserBookmarksWithLabel:(id)arg0 newUserBookmarks:(id)arg1 ;
-(void)stashUserBookmarksWithLabel:(id)arg0 newUserBookmarks:(id)arg1 ;
-(void)unstashUserBookmarksFromLabel:(id)arg0 ;


@end


#endif