// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRAWACCESSORYMETADATA_H
#define SPRAWACCESSORYMETADATA_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRawAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *accessoryCapabilities; // ivar: _accessoryCapabilities
@property (copy, nonatomic) NSData *accessoryCategory; // ivar: _accessoryCategory
@property (copy, nonatomic) NSData *batteryLevel; // ivar: _batteryLevel
@property (copy, nonatomic) NSData *batteryType; // ivar: _batteryType
@property (copy, nonatomic) NSData *findMyVersion; // ivar: _findMyVersion
@property (copy, nonatomic) NSData *firmwareVersion; // ivar: _firmwareVersion
@property (copy, nonatomic) NSData *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSData *modelName; // ivar: _modelName
@property (copy, nonatomic) NSData *productData; // ivar: _productData
@property (copy, nonatomic) NSData *reserved; // ivar: _reserved


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif