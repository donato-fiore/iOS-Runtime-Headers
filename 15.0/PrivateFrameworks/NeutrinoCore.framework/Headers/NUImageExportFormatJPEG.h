// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGEEXPORTFORMATJPEG_H
#define NUIMAGEEXPORTFORMATJPEG_H



#import "NUImageExportFormat.h"

@interface NUImageExportFormatJPEG : NUImageExportFormat {
    CGFloat _compressionQuality;
}


@property (nonatomic) CGFloat compressionQuality;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileType;
-(id)init;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg0 ;


@end


#endif