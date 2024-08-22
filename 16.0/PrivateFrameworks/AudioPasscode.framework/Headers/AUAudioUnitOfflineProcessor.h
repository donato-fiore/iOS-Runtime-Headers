// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUAUDIOUNITOFFLINEPROCESSOR_H
#define AUAUDIOUNITOFFLINEPROCESSOR_H

@class AUAudioUnit;

#import <Foundation/Foundation.h>


@interface AUAudioUnitOfflineProcessor : NSObject {
    unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> _srcFile;
    unique_ptr<OpaqueExtAudioFile, applesauce::raii::detail::opaque_deletion_functor<OpaqueExtAudioFile *, &ExtAudioFileDispose>> _destFile;
    AUAudioUnit *_audioUnit;
    id *_renderBlock;
    BufferList _srcBufferList;
    BufferList _destBufferList;
    vector<float, std::allocator<float>> _srcAudioStorage;
    vector<float, std::allocator<float>> _destAudioStorage;
    id *_pullInputBlock;
}


@property (readonly, nonatomic) NSInteger assetLength; // ivar: _assetLength


-(BOOL)run;
-(id)initWithAudioUnit:(id)arg0 inputFileURL:(id)arg1 outputFileURL:(id)arg2 ioSampleRate:(NSInteger)arg3 ;


@end


#endif