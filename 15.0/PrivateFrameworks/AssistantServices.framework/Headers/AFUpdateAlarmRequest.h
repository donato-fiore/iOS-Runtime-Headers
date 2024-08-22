// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUPDATEALARMREQUEST_H
#define AFUPDATEALARMREQUEST_H

@class NSArray;


#import "AFSiriRequest.h"

@interface AFUpdateAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms; // ivar: _alarms


+(BOOL)supportsSecureCoding;
-(id)alarm;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif