// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENCRYPTEDDATAOBJECT_H
#define PKENCRYPTEDDATAOBJECT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKEncryptedDataObject : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)asWebServiceDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWebServiceDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif