// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACELINETEMPLATE_H
#define GEOPLACELINETEMPLATE_H

@class NSTimeZone, NSMapTable, NSString;
@protocol GEOFactoid;

#import <Foundation/Foundation.h>

#import "GEOPDDataItem.h"
#import "GEOBusinessHours.h"
#import "GEORatingSummary.h"

@interface GEOPlaceLineTemplate : NSObject {
    GEOPDDataItem *_dataItem;
    NSTimeZone *_timeZone;
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) GEOBusinessHours *businessHours;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSObject<GEOFactoid> *factoid;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) GEORatingSummary *ratingSummary;
@property (readonly, nonatomic) int type;


+(BOOL)isDataItemValid:(id)arg0 ;
-(id)initWithDataItem:(id)arg0 timeZone:(id)arg1 attributionMap:(id)arg2 ;


@end


#endif