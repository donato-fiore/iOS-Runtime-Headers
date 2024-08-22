// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIOSURFACECOMPRESSIONSTATISTICSANALYTICSPAYLOAD_H
#define BWIOSURFACECOMPRESSIONSTATISTICSANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWIOSurfaceCompressionStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) float averageRatio; // ivar: _averageRatio
@property (nonatomic) unsigned int bufferHeight; // ivar: _bufferHeight
@property (nonatomic) int compressionType; // ivar: _compressionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float maxRatio; // ivar: _maxRatio
@property (nonatomic) float minRatio; // ivar: _minRatio
@property (nonatomic) int nodeType; // ivar: _nodeType
@property (nonatomic) unsigned int numberOfSamples; // ivar: _numberOfSamples
@property (nonatomic) float standardDeviation; // ivar: _standardDeviation
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalCompressedSize; // ivar: _totalCompressedSize
@property (nonatomic) NSUInteger totalUncompressedSize; // ivar: _totalUncompressedSize


-(id)eventDictionary;
-(id)eventName;
-(void)reset;


@end


#endif