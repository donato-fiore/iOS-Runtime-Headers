// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMSELFIDMODELSCORE_H
#define SGMSELFIDMODELSCORE_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMSelfIdModelScore : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 model:(struct SGMSelfIdModelType_ )arg1 result:(struct SGMTypeSafeBool_ )arg2 supervision:(struct SGMSelfIdSupervisionType_ )arg3 extractionModelVersion:(NSUInteger)arg4 ;


@end


#endif