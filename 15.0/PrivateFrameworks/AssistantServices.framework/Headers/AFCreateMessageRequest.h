// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCREATEMESSAGEREQUEST_H
#define AFCREATEMESSAGEREQUEST_H



#import "AFSiriRequest.h"
#import "STSiriMessage.h"

@interface AFCreateMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithMessage:(id)arg0 ;
-(id)createResponseWithMessageIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif