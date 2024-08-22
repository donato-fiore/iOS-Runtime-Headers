// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2DDETECTIONCONFIGURATION_H
#define ABPK2DDETECTIONCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABPK2DDetectionConfiguration : NSObject

@property (nonatomic) NSInteger abpkDeviceOrientation; // ivar: _abpkDeviceOrientation
@property (readonly, nonatomic) NSInteger algMode; // ivar: _algMode
@property (readonly, nonatomic) NSString *deviceANEVersion; // ivar: _deviceANEVersion
@property (readonly, nonatomic) BOOL deviceANEVersionPriorOrEqualToH12; // ivar: _deviceANEVersionPriorOrEqualToH12
@property (nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType


-(id)initWithAlgorithmMode:(NSInteger)arg0 ;
-(id)initWithAlgorithmMode:(NSInteger)arg0 abpkDeviceOrientation:(NSInteger)arg1 ;
-(id)initWithAlgorithmMode:(NSInteger)arg0 deviceOrientation:(NSInteger)arg1 ;


@end


#endif