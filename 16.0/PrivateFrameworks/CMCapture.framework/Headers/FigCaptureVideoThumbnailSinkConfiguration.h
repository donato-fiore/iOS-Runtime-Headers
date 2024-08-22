// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREVIDEOTHUMBNAILSINKCONFIGURATION_H
#define FIGCAPTUREVIDEOTHUMBNAILSINKCONFIGURATION_H

@class NSArray;


#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;
-(void)dealloc;


@end


#endif