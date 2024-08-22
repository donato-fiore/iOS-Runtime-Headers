// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMEDIAEXPORTER_H
#define MFMEDIAEXPORTER_H


#import <Foundation/Foundation.h>


@interface MFMediaExporter : NSObject



+(id)conversionTimers;
+(id)log;
// +(int)exportAsset:(id)arg0 progressHandler:(id)arg1 completion:(unk)arg2  ;
+(void)jpegRepresentationForImageData:(id)arg0 inputContentType:(id)arg1 completion:(id)arg2 ;
+(void)setConversionTimers:(id)arg0 ;


@end


#endif