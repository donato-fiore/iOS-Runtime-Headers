// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOCURATEDCOLLECTIONTICKET_H
#define _GEOCURATEDCOLLECTIONTICKET_H

@class NSString;
@protocol GEOMapServiceCuratedCollectionTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOCuratedCollectionTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCuratedCollectionTicket>



@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif