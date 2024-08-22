// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOALLCOLLECTIONVIEWTICKET_H
#define _GEOALLCOLLECTIONVIEWTICKET_H

@class NSString;
@protocol GEOMapServiceAllCollectionsViewTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOAllCollectionViewTicket : GEOAbstractRequestResponseTicket <GEOMapServiceAllCollectionsViewTicket>



@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(void)parseAllCollectionViewResponse:(id)arg0 usingError:(id)arg1 onCompletionHandler:(id)arg2 ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif