// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGEEXPORTFORMATTIFF_H
#define NUIMAGEEXPORTFORMATTIFF_H



#import "NUImageExportFormat.h"

@interface NUImageExportFormatTIFF : NUImageExportFormat

@property NSInteger compression; // ivar: _compression
@property NSInteger pixelType; // ivar: _pixelType
@property BOOL preserveAlpha; // ivar: _preserveAlpha


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileType;
-(id)init;
-(int)depth;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg0 ;


@end


#endif