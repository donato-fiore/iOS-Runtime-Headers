// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZARMETADATA_H
#define OZARMETADATA_H

@class NSString;
@protocol NSSecureCoding, OZSimplyCodable, OZSimplyMetadataItemConvertible;

#import <Foundation/Foundation.h>


@interface OZARMetadata : NSObject <NSSecureCoding, OZSimplyCodable, OZSimplyMetadataItemConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)metadataCompressionAlgorithm;
+(id)createWithMetadataItem:(id)arg0 error:(*id)arg1 ;
+(id)decompressedData:(id)arg0 error:(*id)arg1 ;
+(id)metadataItemIdentifier;
+(id)personSegmentationMediaCharacteristics;
+(id)sceneDepthMediaCharacteristics;
+(id)simplyDecodeFromData:(id)arg0 error:(*id)arg1 ;
+(struct opaqueCMFormatDescription *)createMetadataFormat;
+(struct opaqueCMFormatDescription *)metadataFormat;
-(id)compressedDataWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metadataItemWithTimeRange:(struct ? )arg0 error:(*id)arg1 ;
-(id)simplyEncode:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif