// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPREVIEWDEVICECONTEXT_H
#define ICPREVIEWDEVICECONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICPreviewDeviceContext : NSObject {
    NSArray *_deviceScales;
}


@property (readonly) NSArray *deviceScales;
@property (readonly) CGFloat maxDeviceScale;
@property (copy) NSArray *nonScalableDeviceInfo; // ivar: _nonScalableDeviceInfo
@property (copy) NSArray *scalableDeviceInfo; // ivar: _scalableDeviceInfo


+(id)sharedContext;
-(CGFloat)maxSizeOfPreviewDeviceInfoImage;
-(id)deviceInfoScalable:(BOOL)arg0 ;
-(id)init;
-(void)dealloc;
-(void)screensChangedNotification:(id)arg0 ;


@end


#endif