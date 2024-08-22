// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDACCOUNTNOTIFIER_H
#define ACDACCOUNTNOTIFIER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDAccountNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_notificationEntryQueue;
}


@property (readonly, copy, nonatomic) NSArray *notificationEntries; // ivar: _notificationEntries


+(id)allNotificationEntries;
-(BOOL)canRemoveAccount:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)canSaveAccount:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)postWillChangeNotificationForType:(int)arg0 inStore:(id)arg1 newAccount:(id)arg2 oldAccount:(id)arg3 ;
-(id)_pluginsRegisteredForAccount:(id)arg0 ;
-(id)_pluginsRegisteredForNewAccount:(id)arg0 oldAccount:(id)arg1 changeType:(int)arg2 ;
-(id)_provisionedDataclassesForNewAccount:(id)arg0 oldAccount:(id)arg1 ;
-(id)_unsafe_pluginsRegisteredForNewAccount:(id)arg0 oldAccount:(id)arg1 changeType:(id)arg2 ;
-(id)init;
-(id)initWithNotificationEntries:(id)arg0 ;
-(void)addNotificationEntry:(id)arg0 ;
-(void)postDidChangeNotificationForType:(int)arg0 inStore:(id)arg1 newAccount:(id)arg2 oldAccount:(id)arg3 ;
-(void)postDidPerformDataclassActionsOnAccount:(id)arg0 forDataclasses:(id)arg1 ;
-(void)postWillPerformDataclassActionsOnAccount:(id)arg0 forDataclasses:(id)arg1 ;
-(void)removeAllNotificationEntries;


@end


#endif