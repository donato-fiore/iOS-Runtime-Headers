// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSENDDRAFTMESSAGEREQUEST_H
#define STSENDDRAFTMESSAGEREQUEST_H

@class AFSiriRequest, STSiriMessage;



@interface STSendDraftMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
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