// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCHARDWAREOPERATINGMODESETTINGS_H
#define VCHARDWAREOPERATINGMODESETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCHardwareOperatingModeSettings : NSObject {
    int _avcOperatingMode;
}


@property (readonly, nonatomic) NSString *featureListStringH264; // ivar: _featureListStringH264
@property (readonly, nonatomic) NSString *featureListStringHEVC; // ivar: _featureListStringHEVC
@property (readonly, nonatomic) BOOL supportVCPDecoderHEVC; // ivar: _supportVCPDecoderHEVC
@property (readonly, nonatomic) BOOL supportVCPEncoderHEVC; // ivar: _supportVCPEncoderHEVC
@property (readonly, nonatomic) unsigned int tilesPerVideoFrame; // ivar: _tilesPerVideoFrame
@property (readonly, nonatomic) unsigned int usageMode; // ivar: _usageMode
@property (readonly, nonatomic) BOOL vcpInitializedForHEVC; // ivar: _vcpInitializedForHEVC


+(unsigned int)encoderUsageTypeWithOperatingMode:(int)arg0 ;
-(BOOL)vcpSupportsHEVCDecoder;
-(BOOL)vcpSupportsHEVCEncoder;
-(id)initWithMode:(int)arg0 ;
-(unsigned int)numTilesPerVideoFrameForHDRMode:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)featureListString;
-(void)vcpCodecGetPropertiesForID:(int)arg0 block:(id)arg1 ;


@end


#endif