// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMETATRACKDECODER_H
#define VCPMETATRACKDECODER_H

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor;

#import <Foundation/Foundation.h>


@interface VCPMetaTrackDecoder : NSObject {
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;
}




-(NSInteger)status;
-(id)copyNextMetadataGroup;
-(id)initWithTrack:(id)arg0 ;
-(void)dealloc;


@end


#endif