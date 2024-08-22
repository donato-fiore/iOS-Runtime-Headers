// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WDSLEEPSTAGESAMPLEOBJECT_H
#define _WDSLEEPSTAGESAMPLEOBJECT_H

@class NSDateInterval, NSString, HKCategorySample;
@protocol WDDataListDataObjectSource;

#import <Foundation/Foundation.h>


@interface _WDSleepStageSampleObject : NSObject <WDDataListDataObjectSource>



@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKCategorySample *sample; // ivar: _sample
@property (readonly) Class superclass;


-(id)device;
-(id)initWithSample:(id)arg0 ;
-(id)source;


@end


#endif