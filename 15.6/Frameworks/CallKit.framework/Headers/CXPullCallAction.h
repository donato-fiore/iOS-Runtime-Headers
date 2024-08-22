// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXPULLCALLACTION_H
#define CXPULLCALLACTION_H

@class NSDate;


#import "CXCallAction.h"
#import "CXHandoffContext.h"

@interface CXPullCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateConnected; // ivar: _dateConnected
@property (retain, nonatomic) CXHandoffContext *handoffContext; // ivar: _handoffContext


+(BOOL)supportsSecureCoding;
+(CGFloat)timeout;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithDateConnected:(id)arg0 ;
-(void)updateAsFulfilledWithDateConnected:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif