// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENPERSISTENTTEMPORARYEXPOSUREKEY_H
#define ENPERSISTENTTEMPORARYEXPOSUREKEY_H

@class NSString, ENTemporaryExposureKey;

#import <Foundation/Foundation.h>


@interface ENPersistentTemporaryExposureKey : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) ENTemporaryExposureKey *key; // ivar: _key
@property (nonatomic) unsigned int originalReportType; // ivar: _originalReportType
@property (nonatomic) unsigned int originalVariantOfConcernType; // ivar: _originalVariantOfConcernType
@property (readonly, copy, nonatomic) NSString *regionCountryCode; // ivar: _regionCountryCode


-(id)description;
-(id)initWithTemporaryExposureKey:(id)arg0 appBundleIdentifier:(id)arg1 regionCountryCode:(id)arg2 ;


@end


#endif