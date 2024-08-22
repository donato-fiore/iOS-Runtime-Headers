// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSVALIDATIONTOKEN_H
#define _LSVALIDATIONTOKEN_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSValidationToken : NSObject <NSSecureCoding>

 {
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
    id *_owner;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif