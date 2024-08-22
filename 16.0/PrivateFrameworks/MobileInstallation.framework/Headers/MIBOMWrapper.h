// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIBOMWRAPPER_H
#define MIBOMWRAPPER_H


#import <Foundation/Foundation.h>


@interface MIBOMWrapper : NSObject



+(BOOL)_countFilesAndBytesInArchiveAtURL:(id)arg0 withBOMCopier:(struct _BOMCopier *)arg1 totalFiles:(*NSUInteger)arg2 totalUncompressedBytes:(*NSUInteger)arg3 error:(*id)arg4 ;
+(BOOL)extractZipArchiveAtURL:(id)arg0 toURL:(id)arg1 withError:(*id)arg2 ;
+(BOOL)extractZipArchiveAtURL:(id)arg0 toURL:(id)arg1 withError:(*id)arg2 extractionProgressBlock:(id)arg3 ;


@end


#endif