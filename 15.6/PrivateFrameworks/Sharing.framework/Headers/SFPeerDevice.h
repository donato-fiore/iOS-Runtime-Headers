// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPEERDEVICE_H
#define SFPEERDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPeerDevice : NSObject <NSSecureCoding>



@property (getter=isDefaultPairedDevice) BOOL defaultPairedDevice; // ivar: _defaultPairedDevice
@property (copy) NSString *deviceColor; // ivar: _deviceColor
@property (copy) NSString *enclosureColor; // ivar: _enclosureColor
@property NSInteger keyCounter; // ivar: _keyCounter
@property (copy) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (copy) NSString *name; // ivar: _name
@property (copy) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (copy) NSString *productName; // ivar: _productName
@property (copy) NSString *productVersion; // ivar: _productVersion
@property (copy) NSString *uniqueID; // ivar: _uniqueID
@property BOOL validKey; // ivar: _validKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif