// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOMETALENSSWITCHANALYZER_H
#define VCPVIDEOMETALENSSWITCHANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPVideoMetaLensSwitchAnalyzer : NSObject

@property (nonatomic) BOOL hadZoom; // ivar: _hadZoom
@property (nonatomic) float maxZoom; // ivar: _maxZoom
@property (nonatomic) float minZoom; // ivar: _minZoom


-(id)init;
-(id)results;


@end


#endif