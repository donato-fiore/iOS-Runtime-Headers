// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRIGHTNESSSYSTEM_H
#define BRIGHTNESSSYSTEM_H


#import <Foundation/Foundation.h>

#import "BrightnessSystemInternal.h"

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}




-(BOOL)isAlsSupported;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerNotificationBlock:(id)arg0 ;
// -(void)registerNotificationBlock:(id)arg0 forProperties:(unk)arg1  ;


@end


#endif