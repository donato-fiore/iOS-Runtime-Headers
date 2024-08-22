// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELTRANSMITSTARTACTION_H
#define CXCHANNELTRANSMITSTARTACTION_H

@class NSDate;


#import "CXChannelAction.h"

@interface CXChannelTransmitStartAction : CXChannelAction

@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithStartDate:(id)arg0 ;
-(void)updateAsFulfilledWithStartDate:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif