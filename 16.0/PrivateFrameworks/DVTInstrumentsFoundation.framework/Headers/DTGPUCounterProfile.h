// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTGPUCOUNTERPROFILE_H
#define DTGPUCOUNTERPROFILE_H

@class NSArray, NSString;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface DTGPUCounterProfile : NSObject

@property (readonly, nonatomic) NSArray *counters; // ivar: _counters
@property (nonatomic) NSUInteger defaultSampleInterval; // ivar: _defaultSampleInterval
@property (retain, nonatomic) NSString *derivedCounterScriptPath; // ivar: _derivedCounterScriptPath
@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileName; // ivar: _profileName


-(BOOL)prepare;
-(BOOL)start:(NSUInteger)arg0 vendorFeatures:(id)arg1 ;
-(id)counterProfileForHost;
-(id)initWithProfile:(NSUInteger)arg0 device:(id)arg1 ;
-(id)ringBufferCounts;
-(id)sampleSizes;
-(void)addCounter:(id)arg0 ;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;
-(void)stop;


@end


#endif