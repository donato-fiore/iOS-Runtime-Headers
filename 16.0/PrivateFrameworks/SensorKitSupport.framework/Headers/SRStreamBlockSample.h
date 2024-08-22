// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSTREAMBLOCKSAMPLE_H
#define SRSTREAMBLOCKSAMPLE_H

@class NSString, NSDictionary;
@protocol SRSampling, SRSampleExporting, SRSampleDirectExporting;

#import <Foundation/Foundation.h>

#import "_TtC16SensorKitSupport13SRStreamBlock.h"

@interface SRStreamBlockSample : NSObject <SRSampling, SRSampleExporting, SRSampleDirectExporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *sampleDict; // ivar: _sampleDict
@property (retain, nonatomic) _TtC16SensorKitSupport13SRStreamBlock *streamBlock; // ivar: _streamBlock
@property (readonly) Class superclass;


-(BOOL)sr_prefersUTF8StringRepresentation;
-(NSInteger)sr_writeUTF8RepresentationToOutputStream:(id)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)sr_dictionaryRepresentation;


@end


#endif