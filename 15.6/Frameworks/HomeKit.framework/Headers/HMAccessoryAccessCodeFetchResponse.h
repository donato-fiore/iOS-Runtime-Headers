// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYACCESSCODEFETCHRESPONSE_H
#define HMACCESSORYACCESSCODEFETCHRESPONSE_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"

@interface HMAccessoryAccessCodeFetchResponse : NSObject

@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSArray *accessoryAccessCodes; // ivar: _accessoryAccessCodes
@property (retain) NSError *error; // ivar: _error


+(id)responseWithValue:(id)arg0 accessory:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 accessoryAccessCodes:(id)arg1 error:(id)arg2 ;


@end


#endif