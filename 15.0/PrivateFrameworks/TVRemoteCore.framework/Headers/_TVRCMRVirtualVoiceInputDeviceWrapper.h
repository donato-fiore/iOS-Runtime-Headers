// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRVIRTUALVOICEINPUTDEVICEWRAPPER_H
#define _TVRCMRVIRTUALVOICEINPUTDEVICEWRAPPER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {
    *void _deviceDescriptor;
}


@property (copy, nonatomic) NSDictionary *defaultAudioFormat;
@property (copy, nonatomic) NSArray *supportedFormats;


-(*void)deviceDescriptor;
-(id)init;
-(void)dealloc;


@end


#endif