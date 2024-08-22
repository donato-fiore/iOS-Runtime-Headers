// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOGUIDELOCATIONSLOOKUPTICKET_H
#define _GEOGUIDELOCATIONSLOOKUPTICKET_H

@class NSArray, NSString;
@protocol GEOMapServiceGuideLocationsLookupTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOGuideLocationsLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServiceGuideLocationsLookupTicket>

 {
    NSArray *_guideLocationEntries;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithRequest:(id)arg0 traits:(id)arg1 guideLocationsEntries:(id)arg2 ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif