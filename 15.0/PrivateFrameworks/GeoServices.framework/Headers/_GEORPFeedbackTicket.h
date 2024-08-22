// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEORPFEEDBACKTICKET_H
#define _GEORPFEEDBACKTICKET_H

@class NSData, NSString;
@protocol GEOMapServiceFeedbackReportTicket, GEOMapItem;


#import "GEOAbstractTicket.h"
#import "GEORPFeedbackRequestParameters.h"
#import "GEORPFeedbackRequest.h"
#import "GEORPUserCredentials.h"
#import "GEOMapServiceTraits.h"

@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket>

 {
    NSData *_resubmissionData;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    id<GEOMapItem> *_place;
    GEORPFeedbackRequest *_feedbackRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    BOOL _started;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithFeedbackRequest:(id)arg0 traits:(id)arg1 ;
-(id)initWithFeedbackRequestData:(id)arg0 traits:(id)arg1 ;
-(id)initWithFeedbackRequestParameters:(id)arg0 placeForProblemContext:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(struct ? )dataRequestKind;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif