// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDONATIONHANDLER_H
#define HMDDONATIONHANDLER_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDDonationHandler : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedDonationHandler;
-(id)_init;
-(id)init;
-(void)_donateActionSet:(id)arg0 withMessage:(id)arg1 ;
-(void)_donateIntent:(id)arg0 withActionSet:(id)arg1 ;
-(void)_removeIntentForActionSet:(id)arg0 ;
-(void)donateActionSet:(id)arg0 withMessage:(id)arg1 ;
-(void)removeIntentForActionSet:(id)arg0 ;


@end


#endif