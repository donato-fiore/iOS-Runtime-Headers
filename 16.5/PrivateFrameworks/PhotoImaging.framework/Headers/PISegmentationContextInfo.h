// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONCONTEXTINFO_H
#define PISEGMENTATIONCONTEXTINFO_H

@class NSString;
@protocol PFParallaxLayoutConfiguration;

#import <Foundation/Foundation.h>


@interface PISegmentationContextInfo : NSObject

@property (nonatomic) NSInteger infillAlgorithm; // ivar: _infillAlgorithm
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (nonatomic) BOOL segmentationDisabled; // ivar: _segmentationDisabled
@property (nonatomic) NSInteger sourceMode; // ivar: _sourceMode
@property (copy, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (copy, nonatomic) NSString *systemName; // ivar: _systemName
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (nonatomic) NSUInteger version; // ivar: _version


+(id)currentContextInfo;


@end


#endif