// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETRFIDCODERESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETRFIDCODERESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetRFIDCodeResponseParams : NSObject

@property (retain, nonatomic) NSData *rfidCode; // ivar: _rfidCode
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId
@property (retain, nonatomic) NSNumber *userStatus; // ivar: _userStatus
@property (retain, nonatomic) NSNumber *userType; // ivar: _userType


-(id)init;


@end


#endif