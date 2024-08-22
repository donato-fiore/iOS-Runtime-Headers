// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTDISPLAYPLAN_H
#define CTDISPLAYPLAN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTPlan.h"

@interface CTDisplayPlan : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (readonly, nonatomic) BOOL isPhysical; // ivar: _isPhysical
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) CTPlan *plan; // ivar: _plan
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlan:(id)arg0 status:(NSInteger)arg1 attributes:(NSUInteger)arg2 isPhysical:(BOOL)arg3 carrierName:(id)arg4 phoneNumber:(id)arg5 label:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif