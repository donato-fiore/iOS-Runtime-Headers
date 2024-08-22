// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIMAGEEXPORTFORMATPNG_H
#define NUIMAGEEXPORTFORMATPNG_H



#import "NUImageExportFormat.h"

@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha; // ivar: _preserveAlpha


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileType;
-(id)init;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg0 ;


@end


#endif