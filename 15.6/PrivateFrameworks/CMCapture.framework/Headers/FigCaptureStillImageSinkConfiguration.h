// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESTILLIMAGESINKCONFIGURATION_H
#define FIGCAPTURESTILLIMAGESINKCONFIGURATION_H



#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL quadraHighResCaptureEnabled; // ivar: _quadraHighResCaptureEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;


@end


#endif