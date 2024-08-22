// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GPURAWCOUNTERSOURCEGROUP_H
#define _GPURAWCOUNTERSOURCEGROUP_H

@class NSString, NSDictionary, NSArray;
@protocol GPURawCounterSourceGroup;

#import <Foundation/Foundation.h>


@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup>



@property (readonly) unsigned int acceleratorPort; // ivar: _acceleratorPort
@property (readonly) NSUInteger availableCounterTriggers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (copy) NSDictionary *options; // ivar: _options
@property (readonly) NSUInteger sampleMarker;
@property NSUInteger samplingPeriodInMicroseconds; // ivar: _samplingPeriodInMicroseconds
@property NSUInteger samplingTriggers; // ivar: _samplingTriggers
@property (readonly) NSArray *sourceList; // ivar: _sourceList
@property (readonly) Class superclass;
@property (copy) NSDictionary *vendorOptions;


-(BOOL)startSampling;
-(BOOL)stopSampling;
-(id)initWithAcceleratorPort:(unsigned int)arg0 ;
-(id)subDivideCounterList:(id)arg0 withOptions:(id)arg1 ;
-(void)dealloc;


@end


#endif