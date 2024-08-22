// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGFLIGHTDATA_H
#define SGFLIGHTDATA_H

@class _PASLazyPurgeableResult, _PASNotificationToken;
@protocol SGSeekable;

#import <Foundation/Foundation.h>


@interface SGFlightData : NSObject {
    id<SGSeekable> *_flightsFh;
    _PASLazyPurgeableResult *_flightDataOffsets;
    id<SGSeekable> *_flightsUpdateFh;
    _PASLazyPurgeableResult *_flightUpdateDataOffsets;
    id<SGSeekable> *_airportsFh;
    _PASLazyPurgeableResult *_airportDataOffsets;
    id<SGSeekable> *_airportsUpdateFh;
    _PASLazyPurgeableResult *_airportUpdateDataOffsets;
    _PASNotificationToken *_assetUpdateToken;
    _PASLazyPurgeableResult *_carrierNames;
    _PASLazyPurgeableResult *_carrierCodesByName;
    _PASLazyPurgeableResult *_carrierUpdateNames;
    _PASLazyPurgeableResult *_carrierUpdateCodesByName;
}




+(id)airportNameNoiseKeywords;
+(id)iataCodeToCityDatabaseDict;
+(id)sanitizeAirportName:(id)arg0 ;
+(id)sharedInstance;
-(id)airportCodeForAirportName:(id)arg0 flightCarrier:(id)arg1 flightNumber:(unsigned short)arg2 otherKnownFlightsToAirport:(id)arg3 outputInfos:(id)arg4 ;
-(id)airportCodeForAirportName:(id)arg0 flightCarrier:(id)arg1 flightNumber:(unsigned short)arg2 outputInfos:(id)arg3 ;
-(id)airportIataCodes;
-(id)airportIataCodesForDataOffset:(id)arg0 ;
-(id)airportsServicedByCarrier:(id)arg0 flightNumber:(unsigned short)arg1 ;
-(id)airportsServicedByCarrier:(id)arg0 flightNumber:(unsigned short)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3 ;
-(id)bestLocalizedNameForAirport:(id)arg0 ;
-(id)carrierIataCodeForCarrierName:(id)arg0 ;
-(id)carrierIataCodes;
-(id)cityForIataCode:(id)arg0 ;
-(id)init;
-(id)latitudeAndLongitudeForAirport:(id)arg0 ;
-(id)latitudeAndLongitudeForAirport:(id)arg0 withDataOffset:(id)arg1 andFileHandle:(id)arg2 ;
-(id)nameForCarrier:(id)arg0 ;
-(id)namesForAirport:(id)arg0 ;
-(id)namesForAirport:(id)arg0 withDataOffset:(id)arg1 andFileHandle:(id)arg2 ;
-(id)timezoneOlsonCodeForAirport:(id)arg0 ;
-(id)timezoneOlsonCodeForAirport:(id)arg0 withDataOffset:(id)arg1 andFileHandle:(id)arg2 ;
-(void)dealloc;
-(void)updateAirports;
-(void)updateCarriers;
-(void)updateFlights;


@end


#endif