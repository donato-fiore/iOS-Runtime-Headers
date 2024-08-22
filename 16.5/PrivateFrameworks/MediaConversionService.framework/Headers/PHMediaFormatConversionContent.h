// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAFORMATCONVERSIONCONTENT_H
#define PHMEDIAFORMATCONVERSIONCONTENT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PHMediaFormatConversionContent : NSObject {
    NSUInteger _length;
    NSString *_fileSignature;
}


@property (readonly) NSString *fileSignature;
@property (readonly) NSString *fileType;
@property (retain) NSURL *fileURL; // ivar: _fileURL
@property (readonly) BOOL isVideo;
@property (readonly) NSUInteger length;
@property NSInteger mediaType; // ivar: _mediaType


-(BOOL)isAssetBundle;
-(BOOL)isImage;
-(id)description;
-(id)typeFromFileExtensionWithError:(*id)arg0 ;


@end


#endif