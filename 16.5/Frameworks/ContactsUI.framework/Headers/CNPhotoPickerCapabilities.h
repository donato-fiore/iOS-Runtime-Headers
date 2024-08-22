// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERCAPABILITIES_H
#define CNPHOTOPICKERCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface CNPhotoPickerCapabilities : NSObject



+(BOOL)allowsAvatarFaceTracking;
+(BOOL)allowsAvatarStoreAccess;
+(BOOL)allowsAvatarUI;
+(BOOL)allowsCameraAccess;
+(BOOL)allowsPhotoLibraryAccess;
+(BOOL)isCameraTCCEnabled;


@end


#endif