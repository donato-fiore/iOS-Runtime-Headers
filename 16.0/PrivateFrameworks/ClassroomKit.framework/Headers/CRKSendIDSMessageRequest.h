// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSENDIDSMESSAGEREQUEST_H
#define CRKSENDIDSMESSAGEREQUEST_H

@class CATTaskRequest, NSString, NSDictionary;


#import "CRKIDSMessageOptions.h"

@interface CRKSendIDSMessageRequest : CATTaskRequest

@property (copy, nonatomic) NSString *destinationAddress; // ivar: _destinationAddress
@property (copy, nonatomic) NSDictionary *message; // ivar: _message
@property (copy, nonatomic) CRKIDSMessageOptions *options; // ivar: _options
@property (copy, nonatomic) NSString *sourceAppleID; // ivar: _sourceAppleID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif