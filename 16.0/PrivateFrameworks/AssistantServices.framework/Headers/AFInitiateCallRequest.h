// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFINITIATECALLREQUEST_H
#define AFINITIATECALLREQUEST_H



#import "AFSiriRequest.h"
#import "STCall.h"

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithCall:(id)arg0 ;
-(id)call;
-(id)createResponse;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif