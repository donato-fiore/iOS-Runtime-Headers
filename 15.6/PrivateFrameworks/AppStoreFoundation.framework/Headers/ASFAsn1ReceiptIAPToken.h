// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFASN1RECEIPTIAPTOKEN_H
#define ASFASN1RECEIPTIAPTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ASFAsn1Token.h"

@interface ASFAsn1ReceiptIAPToken : NSObject

@property (readonly) ASFAsn1Token *contentToken; // ivar: mContentToken
@property (readonly) NSUInteger integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) NSUInteger type; // ivar: mType
@property (readonly) NSUInteger typeVersion; // ivar: mTypeVersion


+(id)readFromBuffer:(id)arg0 ;
-(id)_initWithType:(NSUInteger)arg0 typeVersion:(NSUInteger)arg1 contentToken:(id)arg2 ;
-(id)description;


@end


#endif