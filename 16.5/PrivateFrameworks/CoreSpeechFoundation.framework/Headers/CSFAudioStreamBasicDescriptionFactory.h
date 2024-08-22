// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFAUDIOSTREAMBASICDESCRIPTIONFACTORY_H
#define CSFAUDIOSTREAMBASICDESCRIPTIONFACTORY_H


#import <Foundation/Foundation.h>


@interface CSFAudioStreamBasicDescriptionFactory : NSObject



+(struct AudioStreamBasicDescription )aiffFileASBD;
+(struct AudioStreamBasicDescription )lpcmASBD;
+(struct AudioStreamBasicDescription )lpcmFloatASBD;
+(struct AudioStreamBasicDescription )lpcmInt16ASBD;
+(struct AudioStreamBasicDescription )lpcmInt16NarrowBandASBD;
+(struct AudioStreamBasicDescription )lpcmInterleavedASBD;
+(struct AudioStreamBasicDescription )lpcmInterleavedASBDWithSampleRate:(float)arg0 numberOfChannels:(unsigned int)arg1 ;
+(struct AudioStreamBasicDescription )lpcmInterleavedWithRemoteVADASBD;
+(struct AudioStreamBasicDescription )lpcmMonoInterleavedASBD;
+(struct AudioStreamBasicDescription )lpcmMonoInterleavedWithRemoteVADASBD;
+(struct AudioStreamBasicDescription )lpcmMonoNonInterleavedASBD;
+(struct AudioStreamBasicDescription )lpcmMonoNonInterleavedWithRemoteVADASBD;
+(struct AudioStreamBasicDescription )lpcmNarrowBandASBD;
+(struct AudioStreamBasicDescription )lpcmNonInterleavedASBD;
+(struct AudioStreamBasicDescription )lpcmNonInterleavedASBDWithSampleRate:(float)arg0 numberOfChannels:(unsigned int)arg1 ;
+(struct AudioStreamBasicDescription )lpcmNonInterleavedWithRemoteVADASBD;
+(struct AudioStreamBasicDescription )opusASBD;
+(struct AudioStreamBasicDescription )opusNarrowBandASBD;
+(struct AudioStreamBasicDescription )speexASBD;
+(struct AudioStreamBasicDescription )utteranceFileASBD;


@end


#endif