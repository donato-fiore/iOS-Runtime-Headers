// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICMATCHOPERATION_H
#define BIOMETRICMATCHOPERATION_H

@class NSData;


#import "BiometricOperation.h"

@interface BiometricMatchOperation : BiometricOperation {
    ? _noBioLockoutAuthData;
}


@property (retain, nonatomic) NSData *acmContext; // ivar: _acmContext
@property (nonatomic) BOOL forCredentialSet; // ivar: _forCredentialSet
@property (nonatomic) BOOL forPreArm; // ivar: _forPreArm
@property (nonatomic) BOOL forUnlock; // ivar: _forUnlock
@property (nonatomic) BOOL noBioLockout; // ivar: _noBioLockout
@property (readonly, nonatomic) *? noBioLockoutAuthData;
@property (nonatomic) unsigned int noBioLockoutUserID; // ivar: _noBioLockoutUserID
@property (nonatomic) unsigned int processedFlags; // ivar: _processedFlags
@property (retain, nonatomic) NSData *selectedIdentitiesBlob; // ivar: _selectedIdentitiesBlob
@property (nonatomic) BOOL stopOnSuccess; // ivar: _stopOnSuccess
@property (nonatomic) int useCase; // ivar: _useCase
@property (nonatomic) unsigned int userID; // ivar: _userID


-(id)init;
-(int)type;
-(unsigned int)cancelledMessage;


@end


#endif