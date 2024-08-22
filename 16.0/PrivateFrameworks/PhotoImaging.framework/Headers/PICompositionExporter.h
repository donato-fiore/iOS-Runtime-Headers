// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICOMPOSITIONEXPORTER_H
#define PICOMPOSITIONEXPORTER_H


#import <Foundation/Foundation.h>


@interface PICompositionExporter : NSObject



+(BOOL)_lowMemoryModeSupportedForComposition:(id)arg0 ;
+(id)metadataConverter;
+(id)resetImageProperties:(id)arg0 preserveRegions:(BOOL)arg1 ;
+(void)setMetadataConverter:(id)arg0 ;
-(id)addImageProperties:(id)arg0 composition:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)addVideoProperties:(id)arg0 composition:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)exportComposition:(id)arg0 options:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(id)exportComposition:(id)arg0 toPrimaryURL:(id)arg1 videoComplementURL:(id)arg2 videoPosterFrameURL:(id)arg3 priority:(id)arg4 completionQueue:(id)arg5 completion:(id)arg6 ;
-(id)exportVideoToURL:(id)arg0 composition:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)init;
-(id)variationForFlavor:(id)arg0 ;
-(void)_exportVideoToURL:(id)arg0 composition:(id)arg1 options:(id)arg2 properties:(id)arg3 progress:(id)arg4 completion:(id)arg5 ;
-(void)exportImageToDataWithComposition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)exportImageToURL:(id)arg0 composition:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)prepareAuxiliaryImagesFetchProperties:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)prepareImageExportRequest:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif