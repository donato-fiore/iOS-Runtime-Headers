// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSEMANTICSEGMENTATIONMATTE_H
#define AVSEMANTICSEGMENTATIONMATTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVSemanticSegmentationMatte : NSObject {
    NSString *_matteType;
    *__CVBuffer _pixelBuffer;
    int _version;
}


@property (readonly) NSString *matteType;
@property (readonly) *__CVBuffer mattingImage;
@property (readonly) unsigned int pixelFormatType;


+(id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+(id)_allSupportedSemanticSegmentationMatteTypes;
+(id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString *)arg0 dictionaryRepresentation:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentationForAuxiliaryDataType:(*id)arg0 ;
-(id)initWithType:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 auxiliaryMetadata:(struct CGImageMetadata *)arg2 ;
-(id)initWithType:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 semanticSegmentationMatteMetadataDictionary:(id)arg2 ;
-(id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)arg0 ;
-(id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(short)versionMajor;
-(short)versionMinor;
-(struct CGImageMetadata *)copyAuxiliaryMetadata;
-(struct __CFString *)auxiliaryImageType;
-(void)dealloc;


@end


#endif