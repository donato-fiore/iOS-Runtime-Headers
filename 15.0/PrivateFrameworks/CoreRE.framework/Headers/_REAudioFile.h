// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REAUDIOFILE_H
#define _REAUDIOFILE_H

@class AVAudioFile, NSData;


#import "_REAudioFileAssetReader.h"

@interface _REAudioFile : AVAudioFile

@property (retain, nonatomic) NSData *backingData; // ivar: _backingData
@property (retain, nonatomic) _REAudioFileAssetReader *reader; // ivar: _reader


+(id)audioFileWithData:(id)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 ;
-(id)processingFormat;


@end


#endif