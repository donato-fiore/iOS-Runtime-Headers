// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVIDEOSTABILIZATIONANALYTICSPAYLOAD_H
#define BWVIDEOSTABILIZATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWVideoStabilizationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

 {
    unsigned int _count;
    NSString" _portType;
    int _binningFactor;
    float _sigmaHistogram;
    float _overscanHistogram;
}


@property (nonatomic) unsigned int averageLuxValue; // ivar: _averageLuxValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (readonly) NSUInteger hash;
@property (nonatomic) int height; // ivar: _height
@property (nonatomic) float maxUIZoom; // ivar: _maxUIZoom
@property (nonatomic) float minUIZoom; // ivar: _minUIZoom
@property (nonatomic) float startingUIZoom; // ivar: _startingUIZoom
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *videoType; // ivar: _videoType
@property (nonatomic) int width; // ivar: _width


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)setOverscanHistogram:(id)arg0 BinningFactor:(int)arg1 Histogram:(id)arg2 ;
-(void)setSigmaHistogram:(id)arg0 ;


@end


#endif