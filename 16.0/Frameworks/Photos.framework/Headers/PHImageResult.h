// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMAGERESULT_H
#define PHIMAGERESULT_H

@class NSNumber, NSString;


#import "PHCompositeMediaResult.h"

@interface PHImageResult : PHCompositeMediaResult {
    *CGImage _imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}


@property (copy, nonatomic) NSNumber *exifOrientation; // ivar: _exifOrientation
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


-(BOOL)containsValidData;
-(BOOL)isDegraded;
-(BOOL)isPlaceholder;
-(NSInteger)uiOrientation;
-(id)allowedInfoKeys;
-(id)imageData;
-(id)imageURL;
-(id)sanitizedInfoDictionary;
-(struct CGImage *)imageRef;
-(void)dealloc;
-(void)setDegraded:(BOOL)arg0 ;
-(void)setHighDynamicRangeGainMap:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 averagePixelLuminance:(id)arg2 ;
-(void)setImageData:(id)arg0 ;
-(void)setImageRef:(struct CGImage *)arg0 ;
-(void)setImageURL:(id)arg0 ;
-(void)setIsPlaceholder:(BOOL)arg0 ;


@end


#endif