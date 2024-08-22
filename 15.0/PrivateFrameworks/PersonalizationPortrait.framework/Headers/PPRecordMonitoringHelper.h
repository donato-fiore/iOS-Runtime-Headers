// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPRECORDMONITORINGHELPER_H
#define PPRECORDMONITORINGHELPER_H

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPRecordMonitoringHelper : NSObject {
    NSMapTable *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
}




// -(BOOL)loadRecordsAndMonitorChangesWithDelegate:(id)arg0 recordGenerator:(id)arg1 notificationRegistrationBlock:(unk)arg2  ;
// -(id)_handleRecentChangesWithDelegates:(id)arg0 changeGenerator:(id)arg1 recordGenerator:(unk)arg2  ;
-(id)_setupRecentChangesWithDelegates:(id)arg0 recordGenerator:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(void)handleChangeNotificationWithName:(id)arg0 afterDelaySeconds:(CGFloat)arg1 handler:(id)arg2 ;
-(void)loadRecordsWithDelegate:(id)arg0 recordGenerator:(id)arg1 ;
-(void)resetWithDelegate:(id)arg0 recentChangesInProgress:(BOOL)arg1 recordGenerator:(id)arg2 ;
// -(void)sendChangesToDelegatesWithChangeGenerator:(id)arg0 recordGenerator:(unk)arg1  ;
-(void)sendResetToAllDelegatesWithRecordGenerator:(id)arg0 ;


@end


#endif