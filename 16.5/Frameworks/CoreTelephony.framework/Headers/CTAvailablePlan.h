// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTAVAILABLEPLAN_H
#define CTAVAILABLEPLAN_H

@class NSString;


#import "CTPlan.h"

@interface CTAvailablePlan : CTPlan

@property (readonly, nonatomic) NSString *iccid; // ivar: _iccid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif