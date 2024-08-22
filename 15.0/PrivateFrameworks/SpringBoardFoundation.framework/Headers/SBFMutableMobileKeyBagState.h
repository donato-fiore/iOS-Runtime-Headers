// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFMUTABLEMOBILEKEYBAGSTATE_H
#define SBFMUTABLEMOBILEKEYBAGSTATE_H



#import "SBFMobileKeyBagState.h"

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (nonatomic) CGFloat backOffTime;
@property (nonatomic) NSInteger escrowCount;
@property (nonatomic) NSUInteger failedAttemptCount;
@property (nonatomic) NSInteger lockState;
@property (nonatomic) BOOL permanentlyBlocked;
@property (nonatomic) BOOL recoveryEnabled;
@property (nonatomic) BOOL recoveryPossible;
@property (nonatomic) BOOL recoveryRequired;
@property (nonatomic) BOOL shouldWipe;


-(id)_mutableState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMKBLockStateInfo:(id)arg0 ;


@end


#endif