// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSTIMEZONES_H
#define CLSTIMEZONES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CLSTimeZones : NSObject

@property (retain, nonatomic) NSArray *timeZonesDB; // ivar: _timeZonesDB


+(id)sharedInstance;
-(id)_importDataBaseFromFile:(id)arg0 ;
-(id)closestZoneInfoWithLocation:(id)arg0 source:(id)arg1 ;
-(id)filteredTimeZonesWithCountyCode:(id)arg0 ;
-(id)timeZoneWithDictionary:(id)arg0 ;
-(id)timeZoneWithLocation:(id)arg0 ;
-(id)timeZoneWithLocation:(id)arg0 countryCode:(id)arg1 ;
-(void)invalidateCaches;


@end


#endif