// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFMOBILEKEYBAGSTATE_H
#define SBFMOBILEKEYBAGSTATE_H

@class NSDictionary, NSString;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

 {
    NSDictionary *_state;
}


@property (readonly, nonatomic) CGFloat backOffTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger escrowCount;
@property (readonly, nonatomic) NSUInteger failedAttemptCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lockState;
@property (readonly, nonatomic) BOOL permanentlyBlocked;
@property (readonly, nonatomic) BOOL recoveryEnabled;
@property (readonly, nonatomic) BOOL recoveryPossible;
@property (readonly, nonatomic) BOOL recoveryRequired;
@property (readonly, nonatomic) BOOL shouldWipe;
@property (readonly) Class superclass;


-(BOOL)isEffectivelyLocked;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithMKBLockStateInfo:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)publicDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif