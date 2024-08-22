// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMEVENTBANNERCONFIRMED_H
#define SGMEVENTBANNERCONFIRMED_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMEventBannerConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 app:(struct SGMBannerDisplayApp_ )arg1 category:(struct SGMEventCategory_ )arg2 extracted:(struct SGMEventExtractionType_ )arg3 state:(struct SGMEventState_ )arg4 titleAdj:(struct SGMEventStringAdj_ )arg5 dateAdj:(struct SGMEventDateAdj_ )arg6 duraAdj:(struct SGMEventDurationAdj_ )arg7 ;


@end


#endif