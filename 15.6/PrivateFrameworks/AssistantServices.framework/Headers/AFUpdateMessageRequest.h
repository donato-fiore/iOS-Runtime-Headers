// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUPDATEMESSAGEREQUEST_H
#define AFUPDATEMESSAGEREQUEST_H



#import "AFSiriRequest.h"
#import "STSiriMessage.h"

@interface AFUpdateMessageRequest : AFSiriRequest {
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