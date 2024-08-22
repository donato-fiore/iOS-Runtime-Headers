// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSHAREDSTOREREVIEW_H
#define AMSSHAREDSTOREREVIEW_H

@class NSString;
@protocol AMSBagConsumer, AMSBagProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSSharedStoreReview : NSObject <AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue; // ivar: _sharedStoreReviewQueue
@property (readonly) Class superclass;


+(BOOL)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)arg0 currentTime:(id)arg1 sessionInterval:(NSInteger)arg2 ;
+(BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)arg0 sessionCount:(NSInteger)arg1 ;
+(id)_storeReviewMetrics;
+(id)createBagForSubProfile;
+(void)_applicationDidForegroundWithCurrentTime:(id)arg0 storeReviewMetrics:(id)arg1 sessionInterval:(NSInteger)arg2 ;
+(void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)arg0 currentTime:(id)arg1 ;
+(void)_logNewSessionWithStoreReviewMetrics:(id)arg0 currentTime:(id)arg1 ;
+(void)_persistStoreReviewMetrics:(id)arg0 ;
-(BOOL)isEnabled;
-(BOOL)shouldAttemptPromptReview;
-(id)initWithBag:(id)arg0 ;
-(id)isReviewEnabled;
-(id)shouldAttemptReview;
-(void)applicationDidForeground;
-(void)didAttemptPromptReview;


@end


#endif