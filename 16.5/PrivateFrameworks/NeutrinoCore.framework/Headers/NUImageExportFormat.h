// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIMAGEEXPORTFORMAT_H
#define NUIMAGEEXPORTFORMAT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUImageExportFormat : NSObject <NSCopying>





+(id)defaultFormatForURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg0 ;


@end


#endif