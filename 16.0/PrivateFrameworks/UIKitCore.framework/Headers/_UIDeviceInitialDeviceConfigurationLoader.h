// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEVICEINITIALDEVICECONFIGURATIONLOADER_H
#define _UIDEVICEINITIALDEVICECONFIGURATIONLOADER_H

@class UISDeviceContext;

#import <Foundation/Foundation.h>


@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject {
    UISDeviceContext *_context;
    BOOL _hasRequestedPreload;
}


@property (readonly, nonatomic) UISDeviceContext *initialDeviceContext;


+(id)sharedLoader;
-(void)_startPreloadInitialDeviceContext;


@end


#endif