// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHDUPLICATEDETECTION_H
#define PHDUPLICATEDETECTION_H


#import <Foundation/Foundation.h>


@interface PHDuplicateDetection : NSObject



+(BOOL)assetsArePendingForDuplicateMergeProcessing:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(void)mergeDuplicateAssetsWithLocalIdentifiers:(id)arg0 inPhotoLibrary:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif