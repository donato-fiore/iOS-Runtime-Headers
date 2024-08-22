// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSHOWDRAFTMESSAGEREQUEST_H
#define STSHOWDRAFTMESSAGEREQUEST_H

@class AFSiriRequest, NSURL;



@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithDraftMessageIdentifier:(id)arg0 ;
-(id)createResponse;
-(id)createUsageResult;
-(id)description;
-(id)draftMessageIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)message;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif