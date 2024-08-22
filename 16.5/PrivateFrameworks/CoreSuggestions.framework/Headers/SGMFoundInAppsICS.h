// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMFOUNDINAPPSICS_H
#define SGMFOUNDINAPPSICS_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMFoundInAppsICS : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 timezone:(struct SGMFoundInAppsICSTZValue_ )arg1 datetime:(struct SGMFoundInAppsDatetimeType_ )arg2 ;


@end


#endif