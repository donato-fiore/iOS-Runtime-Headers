// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRZIPARCHIVER_H
#define XRZIPARCHIVER_H


#import <Foundation/Foundation.h>


@interface XRZipArchiver : NSObject



+(BOOL)flatArchiveFilesAtURLs:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)flatUnarchiveFileAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;


@end


#endif