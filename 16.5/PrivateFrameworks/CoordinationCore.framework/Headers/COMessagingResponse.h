// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGRESPONSE_H
#define COMESSAGINGRESPONSE_H

@class NSData, NSString;


#import "COMeshResponse.h"

@interface COMessagingResponse : COMeshResponse

@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif