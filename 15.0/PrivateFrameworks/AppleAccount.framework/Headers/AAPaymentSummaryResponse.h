// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAPAYMENTSUMMARYRESPONSE_H
#define AAPAYMENTSUMMARYRESPONSE_H

@class NSDictionary, NSString;


#import "AAResponse.h"

@interface AAPaymentSummaryResponse : AAResponse {
    NSDictionary *_responseParameters;
}


@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSUInteger numberOfCards;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif