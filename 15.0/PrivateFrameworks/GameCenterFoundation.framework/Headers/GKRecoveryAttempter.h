// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKRECOVERYATTEMPTER_H
#define GKRECOVERYATTEMPTER_H


#import <Foundation/Foundation.h>


@interface GKRecoveryAttempter : NSObject {
    id *_attemptRecovery;
}




+(id)recoveryAttempterUsingHandler:(id)arg0 ;
-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(*void)arg4 ;


@end


#endif