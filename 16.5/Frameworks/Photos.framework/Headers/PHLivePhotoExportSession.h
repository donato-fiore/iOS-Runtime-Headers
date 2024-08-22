// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHLIVEPHOTOEXPORTSESSION_H
#define PHLIVEPHOTOEXPORTSESSION_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface PHLivePhotoExportSession : NSObject

@property (readonly, nonatomic) NSArray *fileURLs; // ivar: _fileURLs
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL


+(BOOL)_canCreateLivePhotoWithURLs:(id)arg0 outError:(*id)arg1 ;
+(BOOL)_identifyResourceURLs:(id)arg0 outImageURL:(*id)arg1 outVideoURL:(*id)arg2 error:(*id)arg3 ;
-(BOOL)_isOutputURLValid:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)initWithResourceFileURLs:(id)arg0 ;
-(id)writeToFileURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif