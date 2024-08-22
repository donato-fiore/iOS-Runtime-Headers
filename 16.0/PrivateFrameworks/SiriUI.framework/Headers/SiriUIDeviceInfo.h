// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIDEVICEINFO_H
#define SIRIUIDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface SiriUIDeviceInfo : NSObject

@property (readonly, nonatomic) BOOL deviceShouldDeferFlamesView; // ivar: _deviceShouldDeferFlamesView
@property (readonly, nonatomic) BOOL deviceShouldFreezeAura; // ivar: _deviceShouldFreezeAura
@property (readonly, nonatomic) BOOL deviceShouldSkipGuidePreloading; // ivar: _deviceShouldSkipGuidePreloading
@property (readonly, nonatomic) BOOL deviceShouldUseFrozenBackdropSnapshot; // ivar: _deviceShouldUseFrozenBackdropSnapshot
@property (readonly, nonatomic) BOOL deviceSupportsProximitySensor; // ivar: _deviceSupportsProximitySensor
@property (readonly, nonatomic, getter=isDeviceZoomed) BOOL deviceZoomed; // ivar: _deviceZoomed
@property (readonly, nonatomic, getter=isLargeFormatPhone) BOOL largeFormatPhone; // ivar: _largeFormatPhone


+(id)sharedInstance;
-(id)initWithLargeFormatPhone:(BOOL)arg0 gestaltModes:(id)arg1 screenSize:(struct CGSize )arg2 ;
-(void)_updateProductTypeDerivedProperties;


@end


#endif