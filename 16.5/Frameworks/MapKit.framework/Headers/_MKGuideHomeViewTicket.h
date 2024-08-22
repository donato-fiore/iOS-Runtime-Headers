// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKGUIDEHOMEVIEWTICKET_H
#define _MKGUIDEHOMEVIEWTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceGuideHomeViewTicket, GEOMapServiceGuideHomeViewTicket;

#import <Foundation/Foundation.h>


@interface _MKGuideHomeViewTicket : NSObject <MKMapServiceGuideHomeViewTicket>

 {
    id<GEOMapServiceGuideHomeViewTicket> *_ticket;
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