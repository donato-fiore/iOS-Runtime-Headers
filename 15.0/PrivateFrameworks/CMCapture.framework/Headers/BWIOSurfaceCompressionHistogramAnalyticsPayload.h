// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIOSURFACECOMPRESSIONHISTOGRAMANALYTICSPAYLOAD_H
#define BWIOSURFACECOMPRESSIONHISTOGRAMANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWIOSurfaceCompressionHistogramAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

 {
    NSUInteger _lumaCompressionHistogram;
    NSUInteger _chromaCompressionHistogram;
}


@property (nonatomic) unsigned int bufferHeight; // ivar: _bufferHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int nodeType; // ivar: _nodeType
@property (nonatomic) unsigned int numberOfSamples; // ivar: _numberOfSamples
@property (nonatomic) BOOL pixelFormatIsTenBit; // ivar: _pixelFormatIsTenBit
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(void)dealloc;
-(void)reset;
-(void)setChromaCompressionHistogram:(NSUInteger)arg0 ;
-(void)setLumaCompressionHistogram:(NSUInteger)arg0 ;


@end


#endif