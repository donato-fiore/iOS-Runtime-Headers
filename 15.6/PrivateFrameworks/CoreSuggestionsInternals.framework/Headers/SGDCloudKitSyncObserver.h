// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDCLOUDKITSYNCOBSERVER_H
#define SGDCLOUDKITSYNCOBSERVER_H

@class NSString;
@protocol SGJournalCalendarObserver;

#import <Foundation/Foundation.h>

#import "SGDCloudKitSync.h"

@interface SGDCloudKitSyncObserver : NSObject <SGJournalCalendarObserver>

 {
    id *_cksGetter;
    SGDCloudKitSync *_cks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cloudKitSync;
-(id)init;
-(id)initWithCloudKitSyncGetter:(id)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)calendarDeleted;
-(void)cancelEvent:(id)arg0 ;
-(void)cancelEvents:(id)arg0 ;
-(void)confirmEventFromOtherDevice:(id)arg0 ;
-(void)confirmEventFromThisDevice:(id)arg0 ;
-(void)orphanEvent:(id)arg0 ;
-(void)rejectEventFromOtherDevice:(id)arg0 ;
-(void)rejectEventFromThisDevice:(id)arg0 ;


@end


#endif