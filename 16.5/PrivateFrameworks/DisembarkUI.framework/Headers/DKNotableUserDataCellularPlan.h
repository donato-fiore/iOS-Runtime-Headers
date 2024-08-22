// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKNOTABLEUSERDATACELLULARPLAN_H
#define DKNOTABLEUSERDATACELLULARPLAN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DKNotableUserDataCellularPlan : NSObject

@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (nonatomic) BOOL isTransferred; // ivar: _isTransferred
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(id)initWithCarrierName:(id)arg0 phoneNumber:(id)arg1 isTransferred:(BOOL)arg2 ;


@end


#endif