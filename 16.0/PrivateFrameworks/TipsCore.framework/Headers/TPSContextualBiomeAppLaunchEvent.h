// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCONTEXTUALBIOMEAPPLAUNCHEVENT_H
#define TPSCONTEXTUALBIOMEAPPLAUNCHEVENT_H



#import "TPSContextualBiomeEvent.h"

@interface TPSContextualBiomeAppLaunchEvent : TPSContextualBiomeEvent



+(id)observationDateFromEvent:(id)arg0 ;
-(id)_filteringPredicate;
-(id)filterHandler:(SEL)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;


@end


#endif