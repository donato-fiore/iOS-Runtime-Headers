// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFASN1SETTOKEN_H
#define ASFASN1SETTOKEN_H

@class NSData;


#import "ASFAsn1Token.h"

@interface ASFAsn1SetToken : ASFAsn1Token {
    NSData *mReadData;
}




-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 data:(id)arg2 opaque:(BOOL)arg3 ;
-(id)description;
-(id)nextToken;
-(void)reset;


@end


#endif