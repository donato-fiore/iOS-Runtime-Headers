// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSGZIPDECODER_H
#define NSGZIPDECODER_H

@class NSString;
@protocol NSURLDownloadDecoder;

#import <Foundation/Foundation.h>


@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder>

 {
    z_stream_s _stream;
    NSUInteger _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)decodeDownloadData:(id)arg0 dataForkData:(*id)arg1 resourceForkData:(*id)arg2 ;
-(BOOL)finishDownloadDecoding;
-(BOOL)isFinishedDecoding;
-(id)decodeData:(id)arg0 ;
-(id)fileAttributes;
-(id)filenameWithOriginalFilename:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif