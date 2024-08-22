// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFVIDEOMETADATA_H
#define PFVIDEOMETADATA_H


#import <Foundation/Foundation.h>


@interface PFVideoMetadata : NSObject



+(BOOL)hasValidMetadataForLoopingVideoAsset:(id)arg0 ;
+(BOOL)readMetadataType:(unsigned char)arg0 fromAVAsset:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
+(BOOL)readMetadataType:(unsigned char)arg0 fromFileURL:(id)arg1 value:(*id)arg2 error:(*id)arg3 ;
+(BOOL)videoAssetIsDecodable:(id)arg0 ;
+(BOOL)videoAssetIsHighDynamicRange:(id)arg0 ;
+(BOOL)videoAssetIsPlayable:(id)arg0 ;
+(BOOL)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription *)arg0 ;
+(BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription *)arg0 ;
+(BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription *)arg0 ;
+(id)arrayByRemovingMetadataItemOfType:(unsigned char)arg0 fromArray:(id)arg1 error:(*id)arg2 ;
+(id)firstVideoTrackFormatDebugDescriptionForAsset:(id)arg0 ;
+(id)metadataItemValueFromAsset:(id)arg0 withKey:(id)arg1 keySpace:(id)arg2 ;
+(id)metadataItemsWithMetadataType:(unsigned char)arg0 value:(id)arg1 error:(*id)arg2 ;
+(id)quickTimeMetadataItemValueFromAsset:(id)arg0 withKey:(id)arg1 ;
+(id)quickTimeMetadataItemsWithKey:(id)arg0 value:(id)arg1 ;
+(unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)arg0 ;
+(void)enumerateVideoTrackFormatDescriptionsInAsset:(id)arg0 withBlock:(id)arg1 ;


@end


#endif