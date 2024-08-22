// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOIDEALTRANSPORTTYPEFINDER_H
#define GEOIDEALTRANSPORTTYPEFINDER_H


#import <Foundation/Foundation.h>


@interface GEOIdealTransportTypeFinder : NSObject



+(NSInteger)idealTransportType;
+(NSInteger)idealTransportTypeForCoordinates:(struct ? *)arg0 count:(NSUInteger)arg1 mapType:(int)arg2 ;
+(NSInteger)idealTransportTypeForMapType:(int)arg0 ;
+(NSInteger)idealTransportTypeForOrigin:(struct ? )arg0 destination:(struct ? )arg1 mapType:(int)arg2 ;
+(id)_transportTypePreferenceAsString:(NSInteger)arg0 ;


@end


#endif