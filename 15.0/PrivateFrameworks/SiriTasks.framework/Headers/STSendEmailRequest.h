// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSENDEMAILREQUEST_H
#define STSENDEMAILREQUEST_H

@class AFSiriRequest;


#import "STEmailMessage.h"

@interface STSendEmailRequest : AFSiriRequest {
    STEmailMessage *_message;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_makeAppFrontmost;
-(id)_initWithMessage:(id)arg0 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif