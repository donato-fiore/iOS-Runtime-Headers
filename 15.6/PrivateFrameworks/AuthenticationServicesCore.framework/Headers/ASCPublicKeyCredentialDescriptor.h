// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCPUBLICKEYCREDENTIALDESCRIPTOR_H
#define ASCPUBLICKEYCREDENTIALDESCRIPTOR_H

@class NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCPublicKeyCredentialDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, nonatomic) NSArray *transports; // ivar: _transports


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialID:(id)arg0 transports:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif