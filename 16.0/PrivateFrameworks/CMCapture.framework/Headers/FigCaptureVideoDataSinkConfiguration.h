// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREVIDEODATASINKCONFIGURATION_H
#define FIGCAPTUREVIDEODATASINKCONFIGURATION_H



#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateVideoFrames; // ivar: _discardsLateVideoFrames
@property (nonatomic) BOOL optimizedForPreview; // ivar: _optimizedForPreview
@property (nonatomic) BOOL sceneStabilityMetadataEnabled; // ivar: _sceneStabilityMetadataEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;


@end


#endif