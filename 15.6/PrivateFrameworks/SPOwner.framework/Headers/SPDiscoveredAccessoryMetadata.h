// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPDISCOVEREDACCESSORYMETADATA_H
#define SPDISCOVEREDACCESSORYMETADATA_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPDiscoveredAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int accessoryCapabilities; // ivar: _accessoryCapabilities
@property (nonatomic) NSUInteger accessoryCategory; // ivar: _accessoryCategory
@property (nonatomic) unsigned char batteryState; // ivar: _batteryState
@property (nonatomic) unsigned char batteryType; // ivar: _batteryType
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSData *productData; // ivar: _productData
@property (copy, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif