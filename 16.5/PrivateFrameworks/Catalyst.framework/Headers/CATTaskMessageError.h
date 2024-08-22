// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATTASKMESSAGEERROR_H
#define CATTASKMESSAGEERROR_H

@class NSError;


#import "CATTaskMessage.h"

@interface CATTaskMessageError : CATTaskMessage

@property (retain, nonatomic) NSError *taskError; // ivar: _taskError


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskUUID:(id)arg0 taskError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif