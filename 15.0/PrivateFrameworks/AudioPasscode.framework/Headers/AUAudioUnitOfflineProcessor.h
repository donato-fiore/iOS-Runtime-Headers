// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUAUDIOUNITOFFLINEPROCESSOR_H
#define AUAUDIOUNITOFFLINEPROCESSOR_H

@class AUAudioUnit;

#import <Foundation/Foundation.h>


@interface AUAudioUnitOfflineProcessor : NSObject {
    CAExtAudioFile _srcFile;
    CAExtAudioFile _destFile;
    AUAudioUnit *_audioUnit;
    id *_renderBlock;
    unique_ptr<CABufferList, std::default_delete<CABufferList>> _srcBufferList;
    unique_ptr<CABufferList, std::default_delete<CABufferList>> _destBufferList;
    id *_pullInputBlock;
}


@property (readonly, nonatomic) NSInteger assetLength; // ivar: _assetLength


-(BOOL)run;
-(id)initWithAudioUnit:(id)arg0 inputFileURL:(id)arg1 outputFileURL:(id)arg2 ioSampleRate:(NSInteger)arg3 ;


@end


#endif