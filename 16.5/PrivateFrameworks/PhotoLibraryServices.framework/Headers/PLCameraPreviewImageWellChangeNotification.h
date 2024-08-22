// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCAMERAPREVIEWIMAGEWELLCHANGENOTIFICATION_H
#define PLCAMERAPREVIEWIMAGEWELLCHANGENOTIFICATION_H

@class UIImage, NSString;


#import "PLChangeNotification.h"

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage *_image;
    NSString *_uuid;
}


@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) UIImage *image;


+(id)notification;
-(id)_init;
-(id)description;
-(id)init;
-(id)name;
-(id)object;
-(id)userInfo;


@end


#endif