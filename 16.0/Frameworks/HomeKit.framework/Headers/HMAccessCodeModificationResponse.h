// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSCODEMODIFICATIONRESPONSE_H
#define HMACCESSCODEMODIFICATIONRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessory.h"
#import "HMAccessoryAccessCode.h"

@interface HMAccessCodeModificationResponse : NSObject

@property (copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (retain) HMAccessoryAccessCode *accessoryAccessCode; // ivar: _accessoryAccessCode
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSInteger operationType; // ivar: _operationType


+(id)responseWithValue:(id)arg0 accessory:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 accessoryAccessCode:(id)arg1 accessCodeValue:(id)arg2 operationType:(NSInteger)arg3 error:(id)arg4 ;


@end


#endif