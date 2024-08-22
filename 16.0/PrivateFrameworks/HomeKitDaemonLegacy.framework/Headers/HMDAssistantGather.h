// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDASSISTANTGATHER_H
#define HMDASSISTANTGATHER_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDAssistantGather : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSString *currentHomeAssistantIdentifier;
@property (readonly, nonatomic) NSString *currentHomeName;
@property (retain, nonatomic) NSArray *currentHomekitObjects; // ivar: _currentHomekitObjects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger homeCount;
@property (readonly, nonatomic) NSArray *homeKitObjects;
@property (weak, nonatomic) HMDHomeManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSString *primaryHomeAssistantIdentifier;
@property (readonly, nonatomic) NSString *primaryHomeName;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_getCurrentHome;
-(id)_getPrimaryHome;
-(id)initWithHomeManager:(id)arg0 queue:(id)arg1 ;
-(void)_gatherHomeKitObjects;
-(void)gatherHomeKitObjectsWithCompletion:(id)arg0 ;
-(void)getSyncEntityObjectsWithCompletionHandler:(id)arg0 ;


@end


#endif