// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSERRORRECOVERYATTEMPTERDELEGATE_H
#define VSERRORRECOVERYATTEMPTERDELEGATE_H


#import <Foundation/Foundation.h>


@interface VSErrorRecoveryAttempterDelegate : NSObject



+(id)sharedDelegate;
-(void)didPresentErrorWithRecovery:(BOOL)arg0 contextInfo:(*void)arg1 ;


@end


#endif