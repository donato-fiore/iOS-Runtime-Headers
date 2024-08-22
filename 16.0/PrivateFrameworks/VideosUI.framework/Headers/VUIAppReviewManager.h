// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPREVIEWMANAGER_H
#define VUIAPPREVIEWMANAGER_H

@class AMSSharedStoreReview;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIAppReviewManager : NSObject {
    NSUInteger _numberOfAddToUpNexts;
    NSUInteger _numberOfPlaybacks;
    NSUInteger _numberOfAddToUpNextsBeforePrompting;
    NSUInteger _numberOfPlaybacksBeforePrompting;
    CGFloat _completionThreshold;
    CGFloat _highestPlaybackProgress;
    AMSSharedStoreReview *_sharedStoreReview;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSUInteger lastPlaybackEvent; // ivar: _lastPlaybackEvent


+(id)sharedInstance;
-(BOOL)_isYouthAccount;
-(BOOL)_shouldAttemptToPrompt;
-(id)init;
-(void)_attemptToPrompt;
-(void)_handleIsPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_resetStates;
-(void)dealloc;
-(void)isFeatureEnabled:(id)arg0 ;
-(void)processAddToUpNext;
-(void)reportApplicationDidForegroundtoAMSSharedStoreReview;
-(void)setMostRecentPlaybackProgressForNonTrailerContent:(CGFloat)arg0 ;


@end


#endif