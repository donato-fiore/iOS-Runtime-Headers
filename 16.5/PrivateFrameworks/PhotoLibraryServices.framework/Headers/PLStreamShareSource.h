// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSTREAMSHARESOURCE_H
#define PLSTREAMSHARESOURCE_H

@class PLSandboxedURL, NSString, NSData, NSURL, PFVideoComplement;

#import <Foundation/Foundation.h>


@interface PLStreamShareSource : NSObject {
    PLSandboxedURL *_sandboxedMediaURL;
    PLSandboxedURL *_sandboxedVideoComplementImageURL;
    PLSandboxedURL *_sandboxedVideoComplementVideoURL;
}


@property (retain, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (retain, nonatomic) NSData *mediaData; // ivar: _mediaData
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (retain, nonatomic) PFVideoComplement *videoComplement; // ivar: _videoComplement


-(id)initWithDictionary:(id)arg0 ;
-(id)photoLibrary;
-(id)serializedDictionary;
-(void)_cleanupIfNeededMediaAtURL:(id)arg0 ;
-(void)cleanupResources;


@end


#endif