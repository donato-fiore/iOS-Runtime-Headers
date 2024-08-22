// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRVIRTUALTOUCHDEVICEWRAPPER_H
#define _TVRCMRVIRTUALTOUCHDEVICEWRAPPER_H


#import <Foundation/Foundation.h>


@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {
    *void _deviceDescriptor;
}


@property (nonatomic, getter=isAbsolute) BOOL absolute;
@property (nonatomic, getter=isDisplayIntegrated) BOOL displayIntegrated;
@property (nonatomic) CGSize screenSize;


-(*void)deviceDescriptor;
-(id)init;
-(void)dealloc;


@end


#endif