// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKWALLETRAPREPORT_H
#define MKWALLETRAPREPORT_H

@class GEORPFeedbackRequestParameters, NSString, GEORPProblem;

#import <Foundation/Foundation.h>


@interface MKWalletRAPReport : NSObject {
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
}


@property (copy, nonatomic) NSString *correlationId;
@property (nonatomic) BOOL isAppleCard;
@property (nonatomic) NSUInteger lookupTransactionType;
@property (copy, nonatomic) NSString *merchantAdamId;
@property (readonly, nonatomic) GEORPProblem *problem; // ivar: _problem
@property (copy, nonatomic) NSString *reportersComment;
@property (readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters; // ivar: _requestParameters


-(id)initForMerchantIssue:(NSUInteger)arg0 merchantIndustryCode:(NSInteger)arg1 mapsIdentifier:(NSUInteger)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(CGFloat)arg8 transactionType:(id)arg9 transactionLocation:(struct ? )arg10 ;


@end


#endif