// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOIDEALTRANSPORTTYPEFINDER_H
#define GEOIDEALTRANSPORTTYPEFINDER_H


#import <Foundation/Foundation.h>


@interface GEOIdealTransportTypeFinder : NSObject



+(NSInteger)idealTransportType;
+(NSInteger)idealTransportTypeForMapType:(int)arg0 ;
+(NSInteger)idealTransportTypeForOrigin:(struct ? )arg0 destination:(struct ? )arg1 mapType:(int)arg2 ;
+(id)_transportTypePreferenceAsString:(NSInteger)arg0 ;


@end


#endif