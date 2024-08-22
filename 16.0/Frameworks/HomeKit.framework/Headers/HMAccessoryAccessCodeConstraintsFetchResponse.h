// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYACCESSCODECONSTRAINTSFETCHRESPONSE_H
#define HMACCESSORYACCESSCODECONSTRAINTSFETCHRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMAccessCodeConstraints.h"

@interface HMAccessoryAccessCodeConstraintsFetchResponse : NSObject

@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) HMAccessCodeConstraints *constraints; // ivar: _constraints
@property (retain) NSError *error; // ivar: _error


+(id)responseWithValue:(id)arg0 home:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 constraints:(id)arg1 error:(id)arg2 ;


@end


#endif