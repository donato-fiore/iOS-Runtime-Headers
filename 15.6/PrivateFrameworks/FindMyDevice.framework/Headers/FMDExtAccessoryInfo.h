// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDEXTACCESSORYINFO_H
#define FMDEXTACCESSORYINFO_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDExtAccessoryInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) NSString *accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (retain, nonatomic) NSString *deviceDiscoveryId; // ivar: _deviceDiscoveryId
@property (retain, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *serialNumbers; // ivar: _serialNumbers


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif