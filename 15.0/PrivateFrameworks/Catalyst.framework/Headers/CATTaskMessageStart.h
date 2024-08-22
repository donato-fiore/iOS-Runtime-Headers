// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATTASKMESSAGESTART_H
#define CATTASKMESSAGESTART_H



#import "CATTaskMessage.h"
#import "CATTaskRequest.h"

@interface CATTaskMessageStart : CATTaskMessage

@property (retain, nonatomic) CATTaskRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskUUID:(id)arg0 request:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif