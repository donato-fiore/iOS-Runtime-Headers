// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMEVENTICSOPPORTUNITY_H
#define SGMEVENTICSOPPORTUNITY_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMEventICSOpportunity : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 source:(struct SGMEventICSSourceType_ )arg1 recipient:(struct SGMEventICSSourceType_ )arg2 accountSetup:(struct SGMTypeSafeBool_ )arg3 ;


@end


#endif