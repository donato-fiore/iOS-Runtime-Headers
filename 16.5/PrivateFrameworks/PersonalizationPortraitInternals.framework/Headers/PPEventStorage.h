// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEVENTSTORAGE_H
#define PPEVENTSTORAGE_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPEventStorage : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)defaultStorage;
-(BOOL)eventKitChangeIsEvent:(id)arg0 ;
-(BOOL)shouldIgnoreEventsOnCalendarWithObjectID:(id)arg0 ;
-(BOOL)shouldIngestEvent:(id)arg0 ;
-(id)eventWithExternalID:(id)arg0 ;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventsInRange:(struct _NSRange )arg0 ;
-(id)init;
-(id)initWithEventStorePurger:(id)arg0 ;
-(id)nlEventsInRange:(struct _NSRange )arg0 ;
-(id)resolveEventFromEKChange:(id)arg0 ;
-(id)suggestedEventsInRange:(struct _NSRange )arg0 ekStore:(id)arg1 ;
-(void)clearCaches;
-(void)enumerateEventsFromEKObjectIDs:(id)arg0 expandingRecurrencesInRange:(id)arg1 usingBlock:(id)arg2 ;
-(void)iterateEventsFrom:(id)arg0 to:(id)arg1 inChunks:(int)arg2 withBlock:(id)arg3 ;
-(void)runBlockWithPurgerDisabled:(id)arg0 ;
-(void)setInvisibleCalendarIdentifiers:(id)arg0 ;


@end


#endif