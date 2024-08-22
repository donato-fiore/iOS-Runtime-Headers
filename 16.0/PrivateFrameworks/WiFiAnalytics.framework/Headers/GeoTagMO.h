// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTAGMO_H
#define GEOTAGMO_H

@class NSManagedObject, NSDate;


#import "BSSMO.h"

@interface GeoTagMO : NSManagedObject

@property (retain, nonatomic) BSSMO *bss;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) int taggedCount;


+(BOOL)isNetworkWithinRangeOfLocation:(id)arg0 range:(CGFloat)arg1 location:(id)arg2 moc:(id)arg3 count:(*NSUInteger)arg4 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 ;
+(id)geoTagsAtLocationInBand:(id)arg0 distance:(CGFloat)arg1 band:(unsigned int)arg2 moc:(id)arg3 ;
+(id)geoTagsForNetwork:(id)arg0 moc:(id)arg1 ;
+(id)geoTagsInBandForNetwork:(unsigned int)arg0 ssid:(id)arg1 moc:(id)arg2 ;


@end


#endif