// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFDELETEALARMREQUEST_H
#define AFDELETEALARMREQUEST_H

@class NSArray;


#import "AFSiriRequest.h"

@interface AFDeleteAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmIdentifiers; // ivar: _alarmIdentifiers


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif