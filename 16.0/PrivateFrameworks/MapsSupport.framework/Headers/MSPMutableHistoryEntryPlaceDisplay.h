// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPMUTABLEHISTORYENTRYPLACEDISPLAY_H
#define MSPMUTABLEHISTORYENTRYPLACEDISPLAY_H

@class NSString, NSUUID, NSDate;
@protocol MSPHistoryEntryPlaceDisplay, GEOMapItem;


#import "MSPMutableHistoryEntry.h"

@interface MSPMutableHistoryEntryPlaceDisplay : MSPMutableHistoryEntry <MSPHistoryEntryPlaceDisplay>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<GEOMapItem> *geoMapItem;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSUUID *supersededSearchStorageIdentifier;
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