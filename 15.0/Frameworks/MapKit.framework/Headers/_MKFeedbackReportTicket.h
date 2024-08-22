// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKFEEDBACKREPORTTICKET_H
#define _MKFEEDBACKREPORTTICKET_H

@class NSString, GEOMapServiceTraits;
@protocol MKMapServiceFeedbackReportTicket, GEOMapServiceFeedbackReportTicket;

#import <Foundation/Foundation.h>


@interface _MKFeedbackReportTicket : NSObject <MKMapServiceFeedbackReportTicket>

 {
    id<GEOMapServiceFeedbackReportTicket> *_ticket;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithFeedbackReportTicket:(id)arg0 ;
-(void)cancel;
// -(void)submitWithCallbackQueue:(id)arg0 handler:(id)arg1 networkActivity:(unk)arg2  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif