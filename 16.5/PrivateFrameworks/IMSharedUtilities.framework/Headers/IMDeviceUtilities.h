// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDEVICEUTILITIES_H
#define IMDEVICEUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMDeviceUtilities : NSObject



+(BOOL)IMDeviceIsChinaRegion;
+(BOOL)IMDeviceIsGreenTea;
+(BOOL)IMDeviceIsIndiaRegion;
+(BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+(BOOL)IMSupportsASTC;
+(BOOL)deviceIsLockedDown;
+(BOOL)supportsBusinessChat;
+(BOOL)supportsDataDetectors;
+(BOOL)supportsFaceTime;
+(BOOL)supportsFocus;
+(BOOL)supportsNameAndPhoto;
+(BOOL)supportsScreenEffects;
+(BOOL)supportsSharedWithYou;
+(BOOL)supportsSpotlight;
+(BOOL)supportsiMessageJunk;
+(void)setSupportsiMessageJunk:(BOOL)arg0 ;


@end


#endif