// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDAUDIOGRAMLISTDATAPROVIDER_H
#define WDAUDIOGRAMLISTDATAPROVIDER_H

@class NSArray;


#import "WDSampleListDataProvider.h"

@interface WDAudiogramListDataProvider : WDSampleListDataProvider

@property (readonly, nonatomic) NSArray *audiogramSamples;


-(id)sampleTypes;
-(id)textForObject:(id)arg0 ;


@end


#endif