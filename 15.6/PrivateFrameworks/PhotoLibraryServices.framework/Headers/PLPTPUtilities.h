// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPTPUTILITIES_H
#define PLPTPUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLPTPUtilities : NSObject



+(BOOL)shouldExpungeAsset:(id)arg0 ;
+(BOOL)shouldExpungeAsset:(id)arg0 withFileManager:(id)arg1 ;
+(id)pathForSidecar:(id)arg0 onAsset:(id)arg1 ;
+(void)enumerateAvailableSidecarFilesOnAsset:(id)arg0 usingBlock:(id)arg1 ;
+(void)enumerateAvailableSidecarFilesOnAsset:(id)arg0 withFileManager:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif