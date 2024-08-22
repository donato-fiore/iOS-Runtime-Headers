// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASN1RECEIPTTOKEN_H
#define ASN1RECEIPTTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "asn1Token.h"

@interface asn1ReceiptToken : NSObject

@property (readonly) asn1Token *contentToken; // ivar: mContentToken
@property (readonly) NSUInteger integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) NSUInteger type; // ivar: mType
@property (readonly) NSUInteger typeVersion; // ivar: mTypeVersion


+(id)readFromBuffer:(char *)arg0 ;
-(id)_initWithType:(NSUInteger)arg0 typeVersion:(NSUInteger)arg1 contentToken:(id)arg2 ;
-(id)description;
-(void)dealloc;


@end


#endif