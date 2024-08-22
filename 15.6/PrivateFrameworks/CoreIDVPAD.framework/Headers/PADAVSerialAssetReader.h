// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PADAVSERIALASSETREADER_H
#define PADAVSERIALASSETREADER_H

@class AVAssetReader, AVAssetReaderTrackOutput;

#import <Foundation/Foundation.h>


@interface PADAVSerialAssetReader : NSObject {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_output;
    BOOL _isReading;
}




-(id)initWithVideoURL:(id)arg0 error:(*id)arg1 ;
-(id)retrieveNextFrame;
-(void)_setupAssetReaderWithVideoURL:(id)arg0 error:(*id)arg1 ;
-(void)close;


@end


#endif