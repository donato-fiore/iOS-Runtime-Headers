// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMAUDIODATASOURCEMIXER_H
#define AXMAUDIODATASOURCEMIXER_H

@class NSSet, NSString;


#import "AXMAudioDataSource.h"

@interface AXMAudioDataSourceMixer : AXMAudioDataSource

@property (retain, nonatomic) NSSet *dataSources; // ivar: _dataSources
@property (readonly, nonatomic) BOOL isMonoOutput;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat panning; // ivar: _panning


-(id)description;
-(id)initWithName:(id)arg0 sampleRate:(CGFloat)arg1 circular:(BOOL)arg2 ;
-(void)addDataSource:(id)arg0 ;
-(void)prepareNextSamples:(NSUInteger)arg0 ;
-(void)removeAllDataSources;
-(void)removeDataSource:(id)arg0 ;
-(void)setCurrentSampleIndex:(NSUInteger)arg0 ;


@end


#endif