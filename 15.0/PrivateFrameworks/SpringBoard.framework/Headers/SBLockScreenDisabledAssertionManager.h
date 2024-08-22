// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENDISABLEDASSERTIONMANAGER_H
#define SBLOCKSCREENDISABLEDASSERTIONMANAGER_H

@class NSMutableSet, NSString;
@protocol SBAutoUnlockRule;

#import <Foundation/Foundation.h>


@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule>

 {
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isLockScreenDisabledForAssertion;
-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(id)init;
-(void)addLockScreenDisableAssertion:(id)arg0 ;
-(void)removeLockScreenDisableAssertion:(id)arg0 ;


@end


#endif