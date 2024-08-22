// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMUTABLEHISTORYENTRYSEARCH_H
#define MSPMUTABLEHISTORYENTRYSEARCH_H

@class NSString, GEOMapRegion, NSDate;
@protocol MSPHistoryEntrySearch;


#import "MSPMutableHistoryEntry.h"

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *locationDisplayString;
@property (copy, nonatomic) GEOMapRegion *mapRegion;
@property (copy, nonatomic) NSString *query;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly, copy, nonatomic) NSDate *usageDate;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif