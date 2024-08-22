// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSERRORRECOVERYATTEMPTER_H
#define VSERRORRECOVERYATTEMPTER_H

@class NSArray, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface VSErrorRecoveryAttempter : NSObject

@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (retain, nonatomic) NSOperationQueue *recoveryAttemptingQueue; // ivar: _recoveryAttemptingQueue


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(id)init;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(*void)arg4 ;


@end


#endif