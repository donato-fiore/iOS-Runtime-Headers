// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESOURCEFORMAT_H
#define FIGCAPTURESOURCEFORMAT_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FigCaptureSourceFormat : NSObject {
    NSDictionary *_formatDictionary;
    NSString *_uniqueID;
    unsigned int _pixelFormatOverride;
}


@property (readonly, getter=isDefaultActiveFormat) BOOL defaultActiveFormat;
@property (readonly) ? defaultHighResStillImageDimensions;
@property (readonly) ? dimensions;
@property (readonly, getter=isExperimental) BOOL experimental;
@property (readonly) unsigned int format;
@property (readonly) *opaqueCMFormatDescription formatDescription;
@property (readonly) NSArray *highResStillImageDimensions; // ivar: _highResStillImageDimensions
@property (readonly) float maxSupportedFrameRate;
@property (readonly) unsigned int mediaType;
@property (readonly) float minSupportedFrameRate;
@property (readonly) ? soleHighResStillImageDimensions;
@property (readonly) NSString *uniqueID;


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 pixelFormatOverride:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif