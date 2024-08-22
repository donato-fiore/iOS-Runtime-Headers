// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCESSORYDEVICE_H
#define PKACCESSORYDEVICE_H

@class NSDictionary, NSString, NSData, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccessoryDevice : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSString *endpointUUID; // ivar: _endpointUUID
@property (readonly, nonatomic) BOOL isMock; // ivar: _isMock
@property (retain, nonatomic) NSData *primaryColorData; // ivar: _primaryColorData
@property (retain, nonatomic) NSData *secondaryColorData; // ivar: _secondaryColorData
@property (readonly, nonatomic, getter=isSleeve) BOOL sleeve;
@property (retain, nonatomic) NSNumber *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)mockAccessoryDevice;
-(id)accessoryTypeString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 endpointUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif