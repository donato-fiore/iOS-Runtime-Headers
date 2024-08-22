// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUSERSETUPPICTUREMANAGER_H
#define CNUSERSETUPPICTUREMANAGER_H


#import <Foundation/Foundation.h>


@interface CNUserSetupPictureManager : NSObject



+(BOOL)clearUserSetupPictureData;
+(BOOL)hasUserSetupPictureData;
+(BOOL)userSetupPictureDataIsFresh;
+(id)log;
+(id)userSetupPictureData;
+(id)userSetupPictureFilePath;
+(id)userSetupPicturePath;


@end


#endif