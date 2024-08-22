// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOBATCHPOPULARNEARBYTICKET_H
#define _GEOBATCHPOPULARNEARBYTICKET_H

@class NSArray, NSString;
@protocol GEOMapServiceBatchNearbyTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket <GEOMapServiceBatchNearbyTicket>

 {
    NSArray *_categories;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithRequest:(id)arg0 traits:(id)arg1 categories:(id)arg2 ;
-(id)resultSectionHeaderForCategory:(id)arg0 ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif