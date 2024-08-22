// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPACCESSORYINFORMATION_H
#define SPACCESSORYINFORMATION_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPAccessoryInformation : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int accessoryCapabilities; // ivar: _accessoryCapabilities
@property (nonatomic) NSUInteger accessoryCategory; // ivar: _accessoryCategory
@property (nonatomic) unsigned char batteryState; // ivar: _batteryState
@property (nonatomic) unsigned char batteryType; // ivar: _batteryType
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSData *productData; // ivar: _productData
@property (copy, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductData:(id)arg0 manufacturerName:(id)arg1 modelName:(id)arg2 firmwareVersion:(id)arg3 protocolVersion:(id)arg4 accessoryCategory:(NSUInteger)arg5 accessoryCapabilities:(unsigned int)arg6 batteryType:(unsigned char)arg7 batteryState:(unsigned char)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif