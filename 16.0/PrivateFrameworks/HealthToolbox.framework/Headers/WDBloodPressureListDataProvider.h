// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDBLOODPRESSURELISTDATAPROVIDER_H
#define WDBLOODPRESSURELISTDATAPROVIDER_H

@class NSArray;


#import "WDSampleListDataProvider.h"

@interface WDBloodPressureListDataProvider : WDSampleListDataProvider {
    NSArray *_systolicAndDiastolicTypes;
}




-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)predicateForType:(id)arg0 ;
-(id)sampleTypes;
-(id)textForObject:(id)arg0 ;


@end


#endif