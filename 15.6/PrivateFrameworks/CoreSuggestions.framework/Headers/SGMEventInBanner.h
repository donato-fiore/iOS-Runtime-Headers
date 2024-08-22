// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMEVENTINBANNER_H
#define SGMEVENTINBANNER_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMEventInBanner : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 app:(struct SGMBannerDisplayApp_ )arg1 category:(struct SGMEventCategory_ )arg2 extracted:(struct SGMEventExtractionType_ )arg3 state:(struct SGMEventState_ )arg4 ;


@end


#endif