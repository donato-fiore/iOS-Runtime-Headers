// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REAUDIOFILEASSETREADER_H
#define _REAUDIOFILEASSETREADER_H


#import <Foundation/Foundation.h>


@interface _REAudioFileAssetReader : NSObject {
    AudioFileAssetReader _reader;
}


@property (readonly, nonatomic) *AudioFileAssetReader reader;


-(id)getBackingData;
-(id)initWithStream:(struct SeekableInputStream *)arg0 ownsStream:(BOOL)arg1 ;


@end


#endif