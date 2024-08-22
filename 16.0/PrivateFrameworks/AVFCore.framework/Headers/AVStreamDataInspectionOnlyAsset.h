// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTREAMDATAINSPECTIONONLYASSET_H
#define AVSTREAMDATAINSPECTIONONLYASSET_H



#import "AVURLAsset.h"

@interface AVStreamDataInspectionOnlyAsset : AVURLAsset



-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg0 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isComposable;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;


@end


#endif