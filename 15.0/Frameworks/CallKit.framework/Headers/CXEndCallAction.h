// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXENDCALLACTION_H
#define CXENDCALLACTION_H

@class NSDate;


#import "CXCallAction.h"

@interface CXEndCallAction : CXCallAction

@property (copy, nonatomic) NSDate *dateEnded; // ivar: _dateEnded


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithDateEnded:(id)arg0 ;
-(void)updateAsFulfilledWithDateEnded:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif