// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXERRORRECOVERYATTEMPTER_H
#define PXERRORRECOVERYATTEMPTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXErrorRecoveryAttempter : NSObject

@property (nonatomic) NSInteger preferredRecoveryOptionIndex; // ivar: _preferredRecoveryOptionIndex
@property (copy, nonatomic) NSArray *recoveryOptions; // ivar: _recoveryOptions


-(NSInteger)alertActionStyleForRecoveryOptionAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(*void)arg4 ;


@end


#endif