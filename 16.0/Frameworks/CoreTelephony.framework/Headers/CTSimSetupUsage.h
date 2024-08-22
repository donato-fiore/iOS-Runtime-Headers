// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTSIMSETUPUSAGE_H
#define CTSIMSETUPUSAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSimSetupUsage : NSObject <NSSecureCoding>



@property NSUInteger alsPlans; // ivar: _alsPlans
@property BOOL inBuddy; // ivar: _inBuddy
@property NSUInteger odaPlans; // ivar: _odaPlans
@property NSUInteger selectedAlsPlans; // ivar: _selectedAlsPlans
@property NSUInteger selectedTransferablePlans; // ivar: _selectedTransferablePlans
@property NSUInteger transferablePlans; // ivar: _transferablePlans


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInBuddy:(BOOL)arg0 transferablePlans:(NSUInteger)arg1 selectedTransferablePlans:(NSUInteger)arg2 alsPlans:(NSUInteger)arg3 selectedAlsPlans:(NSUInteger)arg4 odaPlans:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif