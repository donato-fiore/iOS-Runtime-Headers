// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADRAFTMESSAGEREQUEST_H
#define DADRAFTMESSAGEREQUEST_H



#import "DAMailboxRequest.h"
#import "DAMailMessage.h"

@interface DADraftMessageRequest : DAMailboxRequest

@property (retain, nonatomic) DAMailMessage *message; // ivar: _message
@property (nonatomic) BOOL send; // ivar: _send


-(id)description;
-(id)initWithRequestType:(int)arg0 message:(id)arg1 send:(BOOL)arg2 ;


@end


#endif