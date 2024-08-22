// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLIVEPHOTOBUNDLEUTILITIES_H
#define CKLIVEPHOTOBUNDLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKLivePhotoBundleUtilities : NSObject



+(BOOL)fileExistsAtPath:(id)arg0 ;
+(BOOL)isLivePhotoAtURL:(id)arg0 ;
+(BOOL)writeToBundle:(id)arg0 atURL:(id)arg1 ;
+(id)attachmentPreviewFileURL:(id)arg0 extension:(id)arg1 ;
+(id)calculateLivePhotoVideoPath:(id)arg0 ;
+(id)getLivePhotoBundleURL:(id)arg0 ;


@end


#endif