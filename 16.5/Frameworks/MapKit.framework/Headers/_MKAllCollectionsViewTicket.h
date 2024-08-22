// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKALLCOLLECTIONSVIEWTICKET_H
#define _MKALLCOLLECTIONSVIEWTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceAllCollectionsViewTicket, GEOMapServiceAllCollectionsViewTicket;

#import <Foundation/Foundation.h>


@interface _MKAllCollectionsViewTicket : NSObject <MKMapServiceAllCollectionsViewTicket>

 {
    id<GEOMapServiceAllCollectionsViewTicket> *_ticket;
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