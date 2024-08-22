// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCOMPOSITIONFORMATREADERINSPECTOR_H
#define AVCOMPOSITIONFORMATREADERINSPECTOR_H



#import "AVFormatReaderInspector.h"

@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector



-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg0 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isComposable;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;


@end


#endif