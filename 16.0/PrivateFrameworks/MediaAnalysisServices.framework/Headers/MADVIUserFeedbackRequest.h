// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADVIUSERFEEDBACKREQUEST_H
#define MADVIUSERFEEDBACKREQUEST_H

@class NSData, NSString;


#import "MADRequest.h"

@interface MADVIUserFeedbackRequest : MADRequest

@property (readonly, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *reportIdentifier; // ivar: _reportIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 andReportIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif