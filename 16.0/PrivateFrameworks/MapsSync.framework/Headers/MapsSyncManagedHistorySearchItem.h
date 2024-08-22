// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDHISTORYSEARCHITEM_H
#define MAPSSYNCMANAGEDHISTORYSEARCHITEM_H

@class NSData, NSString;


#import "MapsSyncManagedHistoryItem.h"

@interface MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem

@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif