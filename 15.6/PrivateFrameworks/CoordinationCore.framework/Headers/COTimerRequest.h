// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COTIMERREQUEST_H
#define COTIMERREQUEST_H

@class MTTimer;


#import "COMeshRequest.h"

@interface COTimerRequest : COMeshRequest

@property (readonly, copy, nonatomic) MTTimer *timer; // ivar: _timer


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif