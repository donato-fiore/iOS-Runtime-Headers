// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSHOWALARMREQUEST_H
#define AFSHOWALARMREQUEST_H

@class NSArray;


#import "AFSiriRequest.h"

@interface AFShowAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms; // ivar: _alarms


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif