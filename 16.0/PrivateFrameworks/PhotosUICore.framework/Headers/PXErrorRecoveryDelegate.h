// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXERRORRECOVERYDELEGATE_H
#define PXERRORRECOVERYDELEGATE_H


#import <Foundation/Foundation.h>


@interface PXErrorRecoveryDelegate : NSObject



+(id)sharedErrorRecoveryDelegate;
-(void)_didPresentErrorWithRecovery:(BOOL)arg0 contextInfo:(*void)arg1 ;


@end


#endif