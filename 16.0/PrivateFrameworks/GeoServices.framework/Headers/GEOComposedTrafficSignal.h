// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDTRAFFICSIGNAL_H
#define GEOCOMPOSEDTRAFFICSIGNAL_H

@protocol NSSecureCoding;


#import "GEOComposedEnrouteNotice.h"
#import "GEOTrafficSignal.h"

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding>

 {
    GEOTrafficSignal *_trafficSignal;
}


@property (readonly, nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) int type;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 trafficSignal:(id)arg3 onRoute:(id)arg4 ;
-(id)position;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif