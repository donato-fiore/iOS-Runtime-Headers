// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMINOTIFYDOBSERVER_H
#define HMINOTIFYDOBSERVER_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMINotifydObserver : HMFObject <HMFLogging>



@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) char * notificationName; // ivar: _notificationName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) int token; // ivar: _token


+(id)logCategory;
-(BOOL)start;
-(id)initWithNotificationName:(char *)arg0 andQueue:(id)arg1 andCallback:(id)arg2 ;
-(void)dealloc;
-(void)publishInitialValue;
-(void)publishValueForToken:(int)arg0 ;


@end


#endif