// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPMACHINEID_H
#define TPMACHINEID_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TPMachineID : NSObject

@property (readonly) NSString *machineID; // ivar: _machineID
@property (readonly) NSDate *modified; // ivar: _modified
@property (readonly) NSUInteger status; // ivar: _status


-(id)description;
-(id)initWithMachineID:(id)arg0 status:(NSUInteger)arg1 modified:(id)arg2 ;


@end


#endif