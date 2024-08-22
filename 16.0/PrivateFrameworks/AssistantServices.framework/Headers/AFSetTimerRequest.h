// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSETTIMERREQUEST_H
#define AFSETTIMERREQUEST_H



#import "AFSiriRequest.h"
#import "STTimer.h"

@interface AFSetTimerRequest : AFSiriRequest

@property (retain, nonatomic) STTimer *timer; // ivar: _timer


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif