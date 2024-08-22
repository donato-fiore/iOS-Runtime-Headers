// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMCONTACTDETAILUSED_H
#define SGMCONTACTDETAILUSED_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactDetailUsed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 app:(struct SGMContactDetailUsedApp_ )arg1 type:(struct SGMContactDetailType_ )arg2 ;


@end


#endif