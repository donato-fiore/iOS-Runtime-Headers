// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYINTERNALERRORRECOVERYATTEMPTER_H
#define _PXSTORYINTERNALERRORRECOVERYATTEMPTER_H



#import "PXStoryErrorRecoveryAttempter.h"

@interface _PXStoryInternalErrorRecoveryAttempter : PXStoryErrorRecoveryAttempter

@property (readonly, weak, nonatomic) id *recoveryAttempter; // ivar: _recoveryAttempter


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)description;
-(id)initWithRecoveryAttempter:(id)arg0 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(*void)arg4 ;


@end


#endif