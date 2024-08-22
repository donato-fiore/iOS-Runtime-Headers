// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMGIFUTILS_H
#define IMGIFUTILS_H


#import <Foundation/Foundation.h>


@interface IMGIFUtils : NSObject



+(BOOL)copyGifFromPath:(id)arg0 toDestinationPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isGIFFileAtPath:(id)arg0 ;
+(BOOL)isGifUti:(id)arg0 ;
+(BOOL)readFileProperties:(*id)arg0 fromImageSource:(struct CGImageSource *)arg1 error:(*id)arg2 ;
+(BOOL)readFileProperties:(*id)arg0 fromImageSource:(struct CGImageSource *)arg1 withUpdatedLoopCount:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)readGifProperties:(*id)arg0 fromImageSource:(struct CGImageSource *)arg1 error:(*id)arg2 ;
+(BOOL)readLoopCount:(*NSInteger)arg0 fromImageSource:(struct CGImageSource *)arg1 error:(*id)arg2 ;
+(BOOL)setOutgoingError:(*id)arg0 errorCode:(NSInteger)arg1 comment:(id)arg2 ;
+(BOOL)writeDefaultPropertiesToDestinationRef:(struct CGImageDestination *)arg0 withOptionalAdditionalGifProperties:(id)arg1 error:(*id)arg2 ;
+(BOOL)writeLoopCount:(NSInteger)arg0 destinationFilePath:(id)arg1 fromImageSource:(struct CGImageSource *)arg2 error:(*id)arg3 ;
+(BOOL)writeLoopCount:(NSInteger)arg0 withFileAtPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)writeNewFileAtPath:(id)arg0 withProperties:(id)arg1 fromImageSource:(struct CGImageSource *)arg2 error:(*id)arg3 ;
+(NSInteger)loopCountFromGifProperties:(id)arg0 ;
+(id)addGifProperties:(id)arg0 toFileProperties:(id)arg1 ;
+(id)defaultFileProperties;
+(id)fileWriter;
+(id)gifPropertiesFromFileProperties:(id)arg0 ;
+(id)logger;
+(id)randomFileName;
+(id)randomTempFilePath;
+(id)setGifProperities:(id)arg0 onFileProperties:(id)arg1 ;
+(void)setFileWriter:(id)arg0 ;
-(id)logger;


@end


#endif