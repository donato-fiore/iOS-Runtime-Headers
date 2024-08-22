// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKAPPSETTINGSFACADE_H
#define WLKAPPSETTINGSFACADE_H


#import <Foundation/Foundation.h>

#import "WLKAppSettings.h"

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}




-(id)accessStatus;
-(id)initWithSettings:(id)arg0 ;
-(id)settings;
-(void)setAccessStatus:(id)arg0 ;


@end


#endif