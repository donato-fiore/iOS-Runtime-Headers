// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNPERSISTENTTRIGGEREDEVENTNOTIFICATIONDATASTORAGE_H
#define CALNPERSISTENTTRIGGEREDEVENTNOTIFICATIONDATASTORAGE_H

@class NSString;
@protocol CALNTriggeredEventNotificationDataStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CALNInMemoryTriggeredEventNotificationDataStorage.h"

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>

 {
    BOOL _protected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage; // ivar: _inMemoryStorage
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)notificationDataFromPersistentStorageWithPath:(id)arg0 error:(*id)arg1 ;
+(id)persistentStorageWithPath:(id)arg0 isProtectedStorage:(BOOL)arg1 ;
-(BOOL)_loadDataWithError:(*id)arg0 ;
-(BOOL)_saveDataWithError:(*id)arg0 ;
-(id)initWithPath:(id)arg0 isProtectedStorage:(BOOL)arg1 ;
-(id)notificationData;
-(id)notificationDataWithIdentifier:(id)arg0 ;
-(void)_addNotificationData:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_removeData;
-(void)_removeNotificationDataWithIdentifier:(id)arg0 ;
-(void)addNotificationData:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeNotificationData;
-(void)removeNotificationDataWithIdentifier:(id)arg0 ;


@end


#endif