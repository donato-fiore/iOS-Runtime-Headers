// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKOVERLAYSTYLEPROPERTIESFACTORY_H
#define SBLOCKOVERLAYSTYLEPROPERTIESFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBLockOverlayStylePropertiesFactory : NSObject {
    NSMutableDictionary *_deviceQualityToProperties;
}


@property (readonly, nonatomic) NSUInteger style; // ivar: _style


+(id)overlayPropertiesFactoryWithStyle:(NSUInteger)arg0 ;
-(id)_fetchAndCachePropsForDeviceQuality:(NSInteger)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
-(id)propertiesWithGraphicsQuality:(NSInteger)arg0 ;


@end


#endif