// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIUSERFEEDBACKREQUEST_H
#define MADVIUSERFEEDBACKREQUEST_H

@class NSString, NSData;


#import "MADRequest.h"

@interface MADVIUserFeedbackRequest : MADRequest

@property (readonly, nonatomic) NSString *reportIdentifier; // ivar: _reportIdentifier
@property (readonly, nonatomic) NSData *sfReportData; // ivar: _sfReportData
@property (readonly, nonatomic) NSData *userFeedbackPayload; // ivar: _userFeedbackPayload


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 andReportIdentifier:(id)arg1 ;
-(id)initWithUserFeedbackPayload:(id)arg0 sfReportData:(id)arg1 reportIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif