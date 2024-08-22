// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPORTRAITEFFECTSMATTE_H
#define AVPORTRAITEFFECTSMATTE_H


#import <Foundation/Foundation.h>

#import "AVPortraitEffectsMatteInternal.h"

@interface AVPortraitEffectsMatte : NSObject {
    AVPortraitEffectsMatteInternal *_internal;
}


@property (readonly) *__CVBuffer mattingImage;
@property (readonly) unsigned int pixelFormatType;


+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentationForAuxiliaryDataType:(*id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 auxiliaryMetadata:(struct CGImageMetadata *)arg1 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 portraitEffectsMatteMetadataDictionary:(id)arg1 ;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)arg0 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(short)versionMajor;
-(short)versionMinor;
-(struct CGImageMetadata *)copyAuxiliaryMetadata;
-(struct __CFString *)auxiliaryImageType;
-(void)dealloc;


@end


#endif