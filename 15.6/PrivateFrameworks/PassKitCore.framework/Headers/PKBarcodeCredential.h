// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBARCODECREDENTIAL_H
#define PKBARCODECREDENTIAL_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKEncryptedDataObject.h"

@interface PKBarcodeCredential : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *expirationTimestamp; // ivar: _expirationTimestamp
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKEncryptedDataObject *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif