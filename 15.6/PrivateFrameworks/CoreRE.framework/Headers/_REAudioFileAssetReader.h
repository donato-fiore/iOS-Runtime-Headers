// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REAUDIOFILEASSETREADER_H
#define _REAUDIOFILEASSETREADER_H


#import <Foundation/Foundation.h>


@interface _REAudioFileAssetReader : NSObject {
    AudioFileAssetReader _reader;
}


@property (readonly, nonatomic) *AudioFileAssetReader reader;


-(id)initWithData:(id)arg0 bytes:(*void)arg1 length:(NSUInteger)arg2 ;


@end


#endif