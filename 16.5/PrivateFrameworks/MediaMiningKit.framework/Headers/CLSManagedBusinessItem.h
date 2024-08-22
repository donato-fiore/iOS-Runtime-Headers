// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMANAGEDBUSINESSITEM_H
#define CLSMANAGEDBUSINESSITEM_H

@class NSManagedObject, NSString, NSNumber;


#import "CLSBusinessCacheEntry.h"

@interface CLSManagedBusinessItem : NSManagedObject

@property (retain, nonatomic) NSString *businessCategories;
@property (nonatomic) unsigned int categories;
@property (retain, nonatomic) CLSBusinessCacheEntry *entry;
@property (retain, nonatomic) NSString *geoServiceProvider;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) NSUInteger muid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat radius;
@property (nonatomic) NSInteger venueCapacity;
@property (retain, nonatomic) NSNumber *venueCapacityAsNumber;


+(id)entityName;


@end


#endif