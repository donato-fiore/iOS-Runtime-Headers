// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBOOKMARKSLOCKCOORDINATOR_H
#define SFBOOKMARKSLOCKCOORDINATOR_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface SFBookmarksLockCoordinator : NSObject {
    BOOL _haveBookmarksLock;
    BOOL _needsBookmarksLockOnAppResume;
    NSTimer *_bookmarkLockTimer;
}


@property (readonly, nonatomic) BOOL hasBookmarksLock;


+(id)sharedCoordinator;
+(void)showLockedDatabaseAlertForAction:(NSInteger)arg0 fromViewController:(id)arg1 ;
-(BOOL)lockBookmarks;
-(id)init;
-(void)_clearBookmarkLockTimer;
-(void)_didBecomeActive;
-(void)_unlockBookmarksNow;
-(void)_willResignActive;
-(void)dealloc;
-(void)unlockBookmarksIfNeeded;
-(void)unlockBookmarksSoon;


@end


#endif