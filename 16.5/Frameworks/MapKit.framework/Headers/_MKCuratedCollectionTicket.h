// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKCURATEDCOLLECTIONTICKET_H
#define _MKCURATEDCOLLECTIONTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceCuratedCollectionTicket, GEOMapServiceCuratedCollectionTicket;

#import <Foundation/Foundation.h>


@interface _MKCuratedCollectionTicket : NSObject <MKMapServiceCuratedCollectionTicket>

 {
    id<GEOMapServiceCuratedCollectionTicket> *_ticket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithTicket:(id)arg0 ;
-(void)cancel;
// -(void)submitWithCallbackQueue:(id)arg0 handler:(id)arg1 networkActivity:(unk)arg2  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif