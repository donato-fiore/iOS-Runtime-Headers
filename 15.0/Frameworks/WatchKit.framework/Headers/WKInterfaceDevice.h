// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKINTERFACEDEVICE_H
#define WKINTERFACEDEVICE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface WKInterfaceDevice : NSObject

@property (readonly, nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled; // ivar: _batteryMonitoringEnabled
@property (readonly, nonatomic) NSInteger batteryState; // ivar: _batteryState
@property (readonly, nonatomic) NSDictionary *cachedImages;
@property (readonly, nonatomic) NSInteger crownOrientation; // ivar: _crownOrientation
@property (copy, nonatomic) NSString *deviceLocalizedModel; // ivar: _deviceLocalizedModel
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) NSString *deviceSystemName; // ivar: _deviceSystemName
@property (copy, nonatomic) NSString *deviceSystemVersion; // ivar: _deviceSystemVersion
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, copy, nonatomic) NSString *localizedModel;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (nonatomic) CGRect screenBounds; // ivar: _screenBounds
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, copy, nonatomic) NSString *systemName;
@property (readonly, copy, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSInteger wristLocation; // ivar: _wristLocation


+(id)currentDevice;
-(BOOL)addCachedImage:(id)arg0 name:(id)arg1 ;
-(BOOL)addCachedImageWithData:(id)arg0 name:(id)arg1 ;
-(void)playHaptic:(NSInteger)arg0 ;
-(void)removeAllCachedImages;
-(void)removeCachedImageWithName:(id)arg0 ;


@end


#endif