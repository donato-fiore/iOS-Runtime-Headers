// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEOHDRMETADATAGENERATOR_H
#define NUVIDEOHDRMETADATAGENERATOR_H


#import <Foundation/Foundation.h>


@interface NUVideoHDRMetadataGenerator : NSObject {
    CGSize _sessionBufferSize;
    *OpaqueVTHDRMetadataGenerationSession _hdrMetadataSession;
    *opaqueVTHDRImageStatisticsGenerationSession _hdrImageStatisticsSession;
}




+(void)resetHDRMetadataForBuffer:(struct __CVBuffer *)arg0 ;
-(int)allocateSessions;
-(int)attachGeneratedHDRMetadataToBuffer:(struct __CVBuffer *)arg0 framesPerSecond:(float)arg1 playbackRate:(float)arg2 ;
-(void)dealloc;
-(void)releaseSessions;


@end


#endif