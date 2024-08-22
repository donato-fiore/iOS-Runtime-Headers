// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMUTABLEHISTORYENTRYTRANSITLINEITEM_H
#define MSPMUTABLEHISTORYENTRYTRANSITLINEITEM_H

@class NSString, NSDate;
@protocol MSPHistoryEntryTransitLineItem, GEOTransitLineItem;


#import "MSPMutableHistoryEntry.h"

@interface MSPMutableHistoryEntryTransitLineItem : MSPMutableHistoryEntry <MSPHistoryEntryTransitLineItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<GEOTransitLineItem> *lineItem;
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