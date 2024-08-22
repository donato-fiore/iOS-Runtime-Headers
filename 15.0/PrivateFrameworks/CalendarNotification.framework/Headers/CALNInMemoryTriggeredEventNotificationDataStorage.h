// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNINMEMORYTRIGGEREDEVENTNOTIFICATIONDATASTORAGE_H
#define CALNINMEMORYTRIGGEREDEVENTNOTIFICATIONDATASTORAGE_H

@class NSString, NSMutableDictionary;
@protocol CALNTriggeredEventNotificationDataStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *notificationDataMap; // ivar: _notificationDataMap
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)notificationData;
-(id)notificationDataWithIdentifier:(id)arg0 ;
-(void)addNotificationData:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeNotificationData;
-(void)removeNotificationDataWithIdentifier:(id)arg0 ;


@end


#endif