// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKSEARCHHOMETICKET_H
#define _MKSEARCHHOMETICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceSearchHomeTicket, GEOMapServiceSearchHomeTicket;

#import <Foundation/Foundation.h>


@interface _MKSearchHomeTicket : NSObject <MKMapServiceSearchHomeTicket>

 {
    id<GEOMapServiceSearchHomeTicket> *_ticket;
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