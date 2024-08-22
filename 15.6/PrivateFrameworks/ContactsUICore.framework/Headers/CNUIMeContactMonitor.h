// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIMECONTACTMONITOR_H
#define CNUIMECONTACTMONITOR_H

@class CNContactStore, NSArray, NSNotificationCenter;
@protocol CNReaderWriterScheduler, CNCancelable, CNMeContactComparisonStrategy;

#import <Foundation/Foundation.h>


@interface CNUIMeContactMonitor : NSObject

@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSObject<CNReaderWriterScheduler> *lock; // ivar: _lock
@property (readonly, nonatomic) NSArray *meContactIdentifiers;
@property (retain, nonatomic) NSObject<CNCancelable> *meNotificationToken; // ivar: _meNotificationToken
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSObject<CNMeContactComparisonStrategy> *strategy; // ivar: _strategy


+(id)makeMeContactMonitor;
+(id)makeUnifiedMeContactMonitor;
+(id)meContactMonitor;
+(id)unifiedMeContactMonitor;
-(BOOL)isMeContact:(id)arg0 ;
-(id)init;
-(id)initWithComparisonStrategy:(id)arg0 ;
-(id)initWithComparisonStrategy:(id)arg0 contactStore:(id)arg1 ;
-(id)initWithComparisonStrategy:(id)arg0 contactStore:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithContactStore:(id)arg0 ;
-(void)dealloc;
-(void)meChanged:(id)arg0 ;
-(void)startMonitoring;


@end


#endif