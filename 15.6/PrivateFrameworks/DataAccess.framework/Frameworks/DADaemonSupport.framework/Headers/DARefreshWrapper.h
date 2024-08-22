// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAREFRESHWRAPPER_H
#define DAREFRESHWRAPPER_H

@class NSDate, NSMutableSet;
@protocol DATokenRegistrationDelegate, DARefreshManagerDelegate;

#import <Foundation/Foundation.h>


@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>



@property (nonatomic) int curStyle; // ivar: _curStyle
@property (weak, nonatomic) NSObject<DARefreshManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger fetchInterval; // ivar: _fetchInterval
@property (retain, nonatomic) NSDate *pushRegistrationTime; // ivar: _pushRegistrationTime
@property (nonatomic) int pushState; // ivar: _pushState
@property (retain, nonatomic) NSMutableSet *refreshCollections; // ivar: _refreshCollections
@property (nonatomic) int refreshReason; // ivar: _refreshReason
@property (retain, nonatomic) NSMutableSet *tokenRegistrations; // ivar: _tokenRegistrations


-(BOOL)isSetToExpectedFetchInterval;
-(NSInteger)XPCActivityInterval;
-(char *)fetchActivityIdentifier;
-(char *)retryActivityIdentifier;
-(id)_fetchActivityCriteriaInOnPowerMode;
-(id)_fetchActivityCriteriaWithInterval:(NSInteger)arg0 ;
-(id)_stringForStyle:(int)arg0 ;
-(id)description;
-(id)init;
-(void)_retryActivityFired;
-(void)cancelAllTokenRegistrations;
-(void)cancelDailyRefreshActivity;
-(void)cancelFetchActivity;
-(void)cancelRetryActivity;
-(void)dailyRefreshActivityFired;
-(void)performTokenRegistrationRequestsWithToken:(id)arg0 onBehalfOf:(id)arg1 ;
-(void)refreshCollections:(id)arg0 withReason:(int)arg1 ;
-(void)retryCollections:(id)arg0 after:(CGFloat)arg1 reason:(int)arg2 ;
-(void)startDailyRefreshActivity;
-(void)startFetchActivityForFetch;
-(void)startFetchActivityForPush;
-(void)startFetchActivityWithInterval:(NSInteger)arg0 ;
-(void)stopCollectionsRefresh;
-(void)tokenRegistrationRequest:(id)arg0 finishedWithError:(id)arg1 ;


@end


#endif