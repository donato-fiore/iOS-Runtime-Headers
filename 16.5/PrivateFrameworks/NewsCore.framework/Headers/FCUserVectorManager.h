// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUSERVECTORMANAGER_H
#define FCUSERVECTORMANAGER_H

@class NSString, NSDate;
@protocol FCAppActivityObserving;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"
#import "FCAsyncSerialQueue.h"
#import "FCUserVector.h"

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>



@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (retain, nonatomic) FCAsyncSerialQueue *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) FCUserVector *userVector; // ivar: _userVector


-(id)initWithContext:(id)arg0 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationDidEnterForeground;
-(void)_cacheGSToken;
-(void)_fetchUserVector:(id)arg0 ;
-(void)_submitPersonalizationVector;
-(void)activityObservingApplicationWillTerminate;
-(void)activityObservingApplicationWindowDidBecomeBackground;
-(void)activityObservingApplicationWindowDidBecomeForeground;


@end


#endif