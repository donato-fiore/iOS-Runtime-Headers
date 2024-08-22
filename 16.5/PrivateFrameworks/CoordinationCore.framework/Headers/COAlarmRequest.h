// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COALARMREQUEST_H
#define COALARMREQUEST_H

@class MTAlarm;


#import "COMeshRequest.h"

@interface COAlarmRequest : COMeshRequest

@property (readonly, copy, nonatomic) MTAlarm *alarm; // ivar: _alarm


+(BOOL)supportsSecureCoding;
-(id)initWithAlarm:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif