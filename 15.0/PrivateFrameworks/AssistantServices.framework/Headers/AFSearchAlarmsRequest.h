// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSEARCHALARMSREQUEST_H
#define AFSEARCHALARMSREQUEST_H



#import "AFSiriRequest.h"
#import "STAlarm.h"

@interface AFSearchAlarmsRequest : AFSiriRequest

@property (retain, nonatomic) STAlarm *criteria; // ivar: _criteria
@property (nonatomic) NSInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif