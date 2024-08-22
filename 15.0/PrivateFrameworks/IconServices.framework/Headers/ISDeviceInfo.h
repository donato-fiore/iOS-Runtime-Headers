// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISDEVICEINFO_H
#define ISDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface ISDeviceInfo : NSObject {
    NSUInteger _screenClass;
    NSUInteger _deviceClass;
}


@property (readonly) int deviceClass;
@property (readonly) NSUInteger deviceSubtype; // ivar: _deviceSubtype
@property (readonly) CGSize homeScreenIconSize;
@property (readonly) NSUInteger ideom;
@property (readonly) CGSize largeHomeScreenIconSize;
@property (readonly) CGSize messagesLauncherIconSize;
@property (readonly) int screenClass;
@property (readonly) CGFloat screenScale; // ivar: _screenScale


+(id)sharedInstance;
-(id)init;


@end


#endif