// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFVIDEOMETADATAVIDEOTRACKFORMATINFO_H
#define PFVIDEOMETADATAVIDEOTRACKFORMATINFO_H

@class AVAsset, NSString;

#import <Foundation/Foundation.h>


@interface PFVideoMetadataVideoTrackFormatInfo : NSObject {
    AVAsset *_asset;
}


@property (readonly) NSInteger bitsPerComponent; // ivar: _bitsPerComponent
@property (readonly) unsigned int codec; // ivar: _codec
@property (readonly) NSString *colorPrimaries; // ivar: _colorPrimaries
@property (readonly) CGSize displaySize; // ivar: _displaySize
@property (readonly) NSString *formatDebugDescription;
@property (readonly) BOOL hasDolby8_4Metadata; // ivar: _hasDolby8_4Metadata
@property (readonly) BOOL hasHEVCProfileTierLevelInfo; // ivar: _hasHEVCProfileTierLevelInfo
@property (readonly) unsigned char hevcLevel; // ivar: _hevcLevel
@property (readonly) unsigned char hevcProfile; // ivar: _hevcProfile
@property (readonly) unsigned char hevcTier; // ivar: _hevcTier
@property (readonly) BOOL isHighDynamicRange; // ivar: _isHighDynamicRange
@property (readonly) NSString *transferFunction; // ivar: _transferFunction


+(BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription *)arg0 ;
+(id)infoForFirstVideoTrackOfAsset:(id)arg0 ;
+(short)_getProfile:(char *)arg0 tier:(char *)arg1 level:(char *)arg2 fromFormatDescriptionExtensions:(id)arg3 ;
-(id)initWithFirstVideoTrackOfAsset:(id)arg0 ;
-(void)_checkFormat;


@end


#endif