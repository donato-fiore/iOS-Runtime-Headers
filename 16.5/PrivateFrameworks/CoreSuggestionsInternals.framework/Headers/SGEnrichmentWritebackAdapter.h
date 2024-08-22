// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGENRICHMENTWRITEBACKADAPTER_H
#define SGENRICHMENTWRITEBACKADAPTER_H

@class NSString;
@protocol SGJournalCalendarObserver;

#import <Foundation/Foundation.h>

#import "SGCoalescingDropBox.h"
#import "SGSqlEntityStore.h"

@interface SGEnrichmentWritebackAdapter : NSObject <SGJournalCalendarObserver>

 {
    SGCoalescingDropBox *_dropBox;
    SGSqlEntityStore *_weakStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isEligibleEvent:(id)arg0 ;
+(id)_attributeSetsForEvents:(id)arg0 ;
+(id)_enrichmentWritebackVersionKey;
-(id)_spotlightUidsForAppleMailMessageIds:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;
-(void)_actuallyAddEvents:(id)arg0 ;
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
-(void)writebackEnrichmentsForNewCopyOfMessage:(id)arg0 ;


@end


#endif