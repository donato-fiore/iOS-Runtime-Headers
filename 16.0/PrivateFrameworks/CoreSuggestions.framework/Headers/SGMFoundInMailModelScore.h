// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMFOUNDINMAILMODELSCORE_H
#define SGMFOUNDINMAILMODELSCORE_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMFoundInMailModelScore : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 model:(struct SGMFoundInMailModelType_ )arg1 contactDetail:(struct SGMContactDetailType_ )arg2 result:(struct SGMTypeSafeBool_ )arg3 correct:(struct SGMTypeSafeBool_ )arg4 mode:(struct SGFoundInMailModelMode_ )arg5 supervision:(struct SGMFoundInMailSupervisionType_ )arg6 ;


@end


#endif