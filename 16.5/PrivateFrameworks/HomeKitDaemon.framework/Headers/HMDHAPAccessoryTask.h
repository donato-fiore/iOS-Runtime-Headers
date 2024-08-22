// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPACCESSORYTASK_H
#define HMDHAPACCESSORYTASK_H

@class NSArray, NSString, NSDate, NSNumber, NSMapTable;
@protocol HMDHAPAccessoryTask;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessoryTaskContext.h"

@interface HMDHAPAccessoryTask : NSObject <HMDHAPAccessoryTask>



@property (readonly) NSArray *characteristicResponses;
@property (readonly) NSUInteger completedRequestsCount;
@property (readonly) id *completion; // ivar: _completion
@property (readonly) HMDHAPAccessoryTaskContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *executionTime; // ivar: _executionTime
@property (readonly) CGFloat executionTimeInterval;
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *identifier;
@property (readonly) NSMapTable *requestToResponseMap; // ivar: _requestToResponseMap
@property (readonly) NSArray *requests; // ivar: _requests
@property (readonly) Class superclass;


-(BOOL)allResponsesReceived;
-(BOOL)supportsMultiPartResponse;
-(NSUInteger)sourceType;
-(id)_updatedCompletion:(SEL)arg0 ;
-(id)activity;
-(id)initWithContext:(id)arg0 requests:(id)arg1 completion:(id)arg2 ;
-(id)logEventsFromAccessoryRequestMap:(id)arg0 accessoryList:(id)arg1 ;
-(id)operationName;
-(id)requestIdentifier;
-(id)workQueue;
-(void)addCharacteristicResponses:(id)arg0 ;
-(void)execute;
-(void)finishTaskWithCharacteristicResponses:(id)arg0 completion:(id)arg1 ;
-(void)sendCharacteristicNotificationsForCompletedTask:(id)arg0 completion:(id)arg1 ;
-(void)sendCharacteristicNotificationsForTaskInProgress:(id)arg0 completion:(id)arg1 ;


@end


#endif