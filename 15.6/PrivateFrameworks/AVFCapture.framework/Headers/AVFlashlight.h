// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFLASHLIGHT_H
#define AVFLASHLIGHT_H


#import <Foundation/Foundation.h>

#import "AVFlashlightInternal.h"

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) float flashlightLevel;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated;


+(BOOL)hasFlashlight;
+(void)initialize;
-(BOOL)turnPowerOnWithError:(*id)arg0 ;
-(id)init;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_reconnectToServer;
-(void)_setupFlashlight;
-(void)_teardownFlashlight;
-(void)dealloc;
-(void)turnPowerOff;


@end


#endif