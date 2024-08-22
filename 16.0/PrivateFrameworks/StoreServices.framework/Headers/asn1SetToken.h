// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASN1SETTOKEN_H
#define ASN1SETTOKEN_H



#import "asn1Token.h"

@interface asn1SetToken : asn1Token {
    char * mReadPointer;
}




-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)description;
-(id)nextToken;
-(void)reset;


@end


#endif