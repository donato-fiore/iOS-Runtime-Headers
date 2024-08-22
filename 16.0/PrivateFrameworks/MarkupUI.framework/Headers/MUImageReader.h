// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMAGEREADER_H
#define MUIMAGEREADER_H


#import <Foundation/Foundation.h>


@interface MUImageReader : NSObject



+(BOOL)hasPrivateImageMetadata:(id)arg0 ;
+(id)_privateImageMetadataDescriptors;
+(id)cleanImageMetadataFromData:(id)arg0 ;
+(id)imageDescriptionFromSourceContent:(id)arg0 ;
-(BOOL)readAnnotationsFromArchivedModelData:(id)arg0 toController:(id)arg1 ;
-(id)_readAnnotationsFromDataProvider:(struct CGDataProvider *)arg0 ;
-(id)_readBaseImageFromDataProvider:(struct CGDataProvider *)arg0 providerSource:(id)arg1 baseWasValid:(*BOOL)arg2 ;
-(id)_readDataFromTagAtPath:(id)arg0 inMetadata:(struct CGImageMetadata *)arg1 ;
-(id)readArchivedModelDataFromImageData:(id)arg0 ;
-(id)readArchivedModelDataFromImageURL:(id)arg0 ;
-(id)readBaseImageFromData:(id)arg0 baseWasValid:(*BOOL)arg1 ;
-(id)readBaseImageFromImageAtURL:(id)arg0 baseWasValid:(*BOOL)arg1 ;


@end


#endif