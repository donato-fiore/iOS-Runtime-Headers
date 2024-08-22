// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCOREDUETMEDIAUSAGESOURCE_H
#define BMCOREDUETMEDIAUSAGESOURCE_H

@protocol BMCoreDuetMediaUsageStore;


#import "BMSource.h"

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) NSObject<BMCoreDuetMediaUsageStore> *storage; // ivar: _storage


-(id)initWithIdentifier:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif