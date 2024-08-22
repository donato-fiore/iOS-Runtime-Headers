// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EARAUDIOREADER_H
#define EARAUDIOREADER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface EARAudioReader : NSObject {
    NSURL *_fileURL;
    NSUInteger _sampleRate;
}




-(id)_avf_enumerateAudioBuffersWithBlock:(id)arg0 ;
-(id)_opx_enumerateAudioBuffersWithBlock:(id)arg0 ;
-(id)_opx_enumeratePacketsWithBlock:(id)arg0 ;
-(id)enumerateAudioBuffersWithBlock:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 sampleRate:(NSUInteger)arg1 ;


@end


#endif