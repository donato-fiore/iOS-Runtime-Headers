// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIMAGEEXPORTFORMATGENERIC_H
#define NUIMAGEEXPORTFORMATGENERIC_H

@class NSString, NSDictionary;


#import "NUImageExportFormat.h"

@interface NUImageExportFormatGeneric : NUImageExportFormat

@property (copy) NSString *fileType; // ivar: _fileType
@property (copy) NSDictionary *options; // ivar: _options
@property int renderFormat; // ivar: _renderFormat


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFileType:(id)arg0 ;
-(void)addImageDestinationOptionsToImageProperties:(id)arg0 ;


@end


#endif