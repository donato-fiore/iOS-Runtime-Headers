// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSHOWMESSAGEREQUEST_H
#define STSHOWMESSAGEREQUEST_H

@class AFSiriRequest, STSiriMessage;



@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
    BOOL _showAsDraft;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_makeAppFrontmost;
-(BOOL)showAsDraft;
-(id)_initWithMessage:(id)arg0 showAsDraft:(BOOL)arg1 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif