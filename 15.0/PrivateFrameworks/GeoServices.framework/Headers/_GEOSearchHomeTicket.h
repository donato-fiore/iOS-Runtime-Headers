// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOSEARCHHOMETICKET_H
#define _GEOSEARCHHOMETICKET_H

@class NSString;
@protocol GEOMapServiceSearchHomeTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOSearchHomeTicket : GEOAbstractRequestResponseTicket <GEOMapServiceSearchHomeTicket>



@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif