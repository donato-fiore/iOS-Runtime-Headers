// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTBARCODESREQUESTCONFIGURATION_H
#define VNDETECTBARCODESREQUESTCONFIGURATION_H

@class NSString, NSArray;


#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSString *locateMode; // ivar: _locateMode
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode; // ivar: _stopAtFirstPyramidWith2DCode
@property (copy, nonatomic) NSArray *symbologies; // ivar: _symbologies
@property (nonatomic) BOOL useMLDetector; // ivar: _useMLDetector


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;
-(void)setDefaultSymbologiesForRevision:(NSUInteger)arg0 ;


@end


#endif