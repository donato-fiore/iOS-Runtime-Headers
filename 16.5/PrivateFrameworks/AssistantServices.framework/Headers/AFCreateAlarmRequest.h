// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCREATEALARMREQUEST_H
#define AFCREATEALARMREQUEST_H



#import "AFSiriRequest.h"
#import "STAlarm.h"

@interface AFCreateAlarmRequest : AFSiriRequest

@property (retain, nonatomic) STAlarm *alarm; // ivar: _alarm


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif