// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENDISABLEASSERTION_H
#define SBLOCKSCREENDISABLEASSERTION_H

@class SBUILockScreenDisableAssertion, NSString, SBFAuthenticationAssertion;



@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}




+(void)initialize;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif