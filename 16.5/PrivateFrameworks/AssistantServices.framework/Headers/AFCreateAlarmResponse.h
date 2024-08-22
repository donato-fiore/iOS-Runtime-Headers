// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCREATEALARMRESPONSE_H
#define AFCREATEALARMRESPONSE_H

@class NSString;


#import "AFSiriResponse.h"

@interface AFCreateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSString *alarmIdentifier; // ivar: _alarmIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif