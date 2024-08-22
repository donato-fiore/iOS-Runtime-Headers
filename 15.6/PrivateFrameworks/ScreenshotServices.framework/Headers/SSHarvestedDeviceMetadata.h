// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSHARVESTEDDEVICEMETADATA_H
#define SSHARVESTEDDEVICEMETADATA_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface SSHarvestedDeviceMetadata : NSObject

@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSNumber *buttonShapesEnabled; // ivar: _buttonShapesEnabled
@property (readonly, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSNumber *displayZoomOption; // ivar: _displayZoomOption
@property (readonly, nonatomic) NSNumber *globalUserInflectionGender; // ivar: _globalUserInflectionGender
@property (readonly, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (readonly, nonatomic) NSNumber *isBoldTextEnabled; // ivar: _isBoldTextEnabled
@property (readonly, nonatomic) NSNumber *mainScreenNativeScale; // ivar: _mainScreenNativeScale
@property (readonly, nonatomic) NSNumber *mainScreenScale; // ivar: _mainScreenScale
@property (readonly, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, nonatomic) NSString *systemLanguage; // ivar: _systemLanguage
@property (readonly, nonatomic) NSNumber *userInterfaceIdiom; // ivar: _userInterfaceIdiom


-(id)_getHardwareModel;
-(id)_getProductName;
-(id)init;


@end


#endif