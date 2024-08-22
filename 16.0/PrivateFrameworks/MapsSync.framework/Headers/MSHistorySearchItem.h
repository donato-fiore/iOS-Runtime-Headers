// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSHISTORYSEARCHITEM_H
#define MSHISTORYSEARCHITEM_H

@class NSData, NSString;


#import "MSHistoryItem.h"

@interface MSHistorySearchItem : MSHistoryItem {
    ? _geoMapRegion;
    ? _language;
    ? _locationDisplay;
    ? _query;
}


@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 geoMapRegion:(id)arg1 language:(id)arg2 locationDisplay:(id)arg3 query:(id)arg4 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif