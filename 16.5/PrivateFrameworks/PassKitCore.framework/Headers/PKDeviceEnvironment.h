// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDEVICEENVIRONMENT_H
#define PKDEVICEENVIRONMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *deviceLanguage; // ivar: _deviceLanguage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)localeDiffersFromEnvironment:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)initWithCountryCode:(id)arg0 deviceLanguage:(id)arg1 ;


@end


#endif