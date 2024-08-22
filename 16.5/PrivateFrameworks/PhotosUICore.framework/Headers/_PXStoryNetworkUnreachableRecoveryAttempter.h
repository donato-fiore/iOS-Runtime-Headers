// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYNETWORKUNREACHABLERECOVERYATTEMPTER_H
#define _PXSTORYNETWORKUNREACHABLERECOVERYATTEMPTER_H

@class PXStoryPublicErrorRecoveryAttempter, NSArray;



@interface _PXStoryNetworkUnreachableRecoveryAttempter : PXStoryPublicErrorRecoveryAttempter

@property (readonly, nonatomic) NSArray *recoveryOptions;


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;


@end


#endif