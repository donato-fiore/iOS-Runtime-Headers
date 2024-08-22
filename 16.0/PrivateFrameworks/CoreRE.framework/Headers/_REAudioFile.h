// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REAUDIOFILE_H
#define _REAUDIOFILE_H

@class AVAudioFile;


#import "_REAudioFileAssetReader.h"

@interface _REAudioFile : AVAudioFile

@property (retain, nonatomic) _REAudioFileAssetReader *reader; // ivar: _reader


+(id)audioFileWithStream:(struct SeekableInputStream *)arg0 ownsStream:(BOOL)arg1 ;
-(id)getBackingData;
-(id)processingFormat;


@end


#endif