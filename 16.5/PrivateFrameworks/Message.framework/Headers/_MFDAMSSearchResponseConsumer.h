// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFDAMSSEARCHRESPONSECONSUMER_H
#define _MFDAMSSEARCHRESPONSECONSUMER_H

@class MFDAMSBasicConsumer, MFConditionLock, NSDate;
@protocol DASearchQueryConsumer;


#import "MFMailMessageStoreSearchResult.h"

@interface _MFDAMSSearchResponseConsumer : MFDAMSBasicConsumer <DASearchQueryConsumer>

 {
    MFConditionLock *doneCondition;
    CGFloat timeReceivedLastResponse;
    unsigned int totalCount;
}


@property (readonly, nonatomic) NSDate *earliestDateAdded; // ivar: earliestDateAdded
@property (retain, nonatomic) NSDate *latestDateToAdd; // ivar: latestDateToAdd
@property (readonly, nonatomic) MFMailMessageStoreSearchResult *searchResult; // ivar: searchResult


-(BOOL)handleItems:(id)arg0 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg0 ;
-(id)initWithMaximumSize:(unsigned int)arg0 latency:(CGFloat)arg1 ;
-(void)resetDoneCondition;
-(void)searchQuery:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedResults:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedTotalCount:(id)arg1 ;
-(void)waitUntilDone;


@end


#endif