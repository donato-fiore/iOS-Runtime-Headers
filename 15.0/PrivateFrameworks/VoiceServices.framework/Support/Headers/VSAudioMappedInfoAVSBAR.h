// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAUDIOMAPPEDINFOAVSBAR_H
#define VSAUDIOMAPPEDINFOAVSBAR_H

@class NSString;
@protocol VSAudioMappedInfo;

#import <Foundation/Foundation.h>


@interface VSAudioMappedInfoAVSBAR : NSObject <VSAudioMappedInfo>

 {
    *opaqueCMSampleBuffer sampleBuf;
}


@property (nonatomic) _NSRange audioBytesRange; // ivar: _audioBytesRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger packetCount; // ivar: _packetCount
@property (nonatomic) _NSRange packetDescriptionsRange; // ivar: _packetDescriptionsRange
@property (readonly) Class superclass;




@end


#endif