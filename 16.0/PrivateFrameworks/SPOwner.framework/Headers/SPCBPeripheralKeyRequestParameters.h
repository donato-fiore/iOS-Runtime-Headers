// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCBPERIPHERALKEYREQUESTPARAMETERS_H
#define SPCBPERIPHERALKEYREQUESTPARAMETERS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SPCBPeripheralManagerSessionKey.h"

@interface SPCBPeripheralKeyRequestParameters : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) SPCBPeripheralManagerSessionKey *sessionKey; // ivar: _sessionKey
@property (readonly, copy, nonatomic) NSArray *vendorIdentifierList; // ivar: _vendorIdentifierList


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionKey:(id)arg0 vendorIdentifierList:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif