// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKCITYSELECTORVIEWTICKET_H
#define _MKCITYSELECTORVIEWTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceCitySelectorViewTicket, GEOMapServiceCitySelectorViewTicket;

#import <Foundation/Foundation.h>


@interface _MKCitySelectorViewTicket : NSObject <MKMapServiceCitySelectorViewTicket>

 {
    id<GEOMapServiceCitySelectorViewTicket> *_ticket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithTicket:(id)arg0 ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif