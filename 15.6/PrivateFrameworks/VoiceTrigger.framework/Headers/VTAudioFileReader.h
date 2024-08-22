// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTAUDIOFILEREADER_H
#define VTAUDIOFILEREADER_H


#import <Foundation/Foundation.h>


@interface VTAudioFileReader : NSObject {
    *OpaqueExtAudioFile _fFile;
}




-(id)initWithURL:(id)arg0 ;
-(id)readSamples:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif