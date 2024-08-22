// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICENROLLOPERATION_H
#define BIOMETRICENROLLOPERATION_H



#import "BiometricOperation.h"

@interface BiometricEnrollOperation : BiometricOperation {
    ? _authData;
}


@property (readonly, nonatomic) *? authData;
@property (nonatomic) unsigned int processedFlags; // ivar: _processedFlags
@property (nonatomic) unsigned int userID; // ivar: _userID


-(id)init;
-(int)type;
-(unsigned int)cancelledMessage;


@end


#endif