// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKEYBOARDSUPPRESSIONMANAGER_H
#define SBKEYBOARDSUPPRESSIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary *_keyboardSuppressionAssertions;
}




+(id)sharedInstance;
// -(id)acquireKeyboardSuppressionAssertionWithReason:(id)arg0 predicate:(id)arg1 displayIdentity:(unk)arg2  ;
-(id)description;
-(id)init;
// -(void)_setKeyboardSuppressed:(BOOL)arg0 forReason:(id)arg1 withPredicate:(id)arg2 displayIdentity:(unk)arg3  ;
// -(void)startSuppressingKeyboardWithReason:(id)arg0 predicate:(id)arg1 displayIdentity:(unk)arg2  ;
-(void)stopSuppressingKeyboardWithReason:(id)arg0 ;


@end


#endif