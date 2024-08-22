// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMIRISDISKUTILITIES_H
#define CAMIRISDISKUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMIrisDiskUtilities : NSObject



+(BOOL)hasPendingWork;
+(BOOL)isValidVideoDestinationPath:(id)arg0 ;
+(BOOL)parseVideoDestinationPath:(id)arg0 forStillImagePersistenceUUID:(*id)arg1 videoPersistenceUUID:(*id)arg2 captureDevice:(*NSInteger)arg3 captureOrientation:(*NSInteger)arg4 captureTime:(*CGFloat)arg5 persistenceOptions:(*NSInteger)arg6 temporaryPersistenceOptions:(*NSInteger)arg7 bundleIdentifier:(*id)arg8 filterName:(*id)arg9 ;
+(id)_delimiterForFilenames;
+(id)_substituteForDotInBundleIdentifier;
+(id)irisVideoDirectoryPath;
+(id)irisVideoDirectoryPathCreateIfNeeded:(BOOL)arg0 ;
+(id)videoDestinationPathForStillImageRequest:(id)arg0 captureTime:(CGFloat)arg1 isEV0ForHDR:(BOOL)arg2 bundleIdentifier:(id)arg3 ;
+(id)videoPathExtension;


@end


#endif