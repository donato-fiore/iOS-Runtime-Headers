// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELTRANSMITSTOPACTION_H
#define CXCHANNELTRANSMITSTOPACTION_H

@class NSDate;


#import "CXChannelAction.h"

@interface CXChannelTransmitStopAction : CXChannelAction

@property (retain, nonatomic) NSDate *stopDate; // ivar: _stopDate


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithStopDate:(id)arg0 ;
-(void)updateAsFulfilledWithStopDate:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif