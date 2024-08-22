// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDETAILCONTEXTWIFIMODECONFIG_H
#define WFDETAILCONTEXTWIFIMODECONFIG_H


#import <Foundation/Foundation.h>


@interface WFDetailContextWiFiModeConfig : NSObject

@property (nonatomic) NSInteger wifiMode; // ivar: _wifiMode
@property (nonatomic, getter=isWifiModeConfigurable) BOOL wifiModeConfigurable; // ivar: _wifiModeConfigurable


-(id)initWithConfigurable:(BOOL)arg0 wifiMode:(NSInteger)arg1 ;


@end


#endif