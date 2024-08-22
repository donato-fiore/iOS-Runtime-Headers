// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCDAFDEVICE_H
#define SCDAFDEVICE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCDAFDevice : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *assistantId; // ivar: _assistantId
@property (copy, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSArray *deviceClass; // ivar: _deviceClass
@property (copy, nonatomic) NSString *enclosureColor; // ivar: _enclosureColor
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *productTypes; // ivar: _productTypes
@property (copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (copy, nonatomic) NSString *speechId; // ivar: _speechId


+(BOOL)supportsSecureCoding;
+(NSUInteger)deviceClassFromProductTypeString:(id)arg0 ;
+(id)arrayDictionaryRepresentation:(id)arg0 ;
+(id)devicesArrayWithDictionaryRepresentation:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif