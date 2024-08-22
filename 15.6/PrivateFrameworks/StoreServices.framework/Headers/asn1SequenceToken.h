// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASN1SEQUENCETOKEN_H
#define ASN1SEQUENCETOKEN_H



#import "asn1Token.h"

@interface asn1SequenceToken : asn1Token {
    char * mReadPointer;
}




-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)description;
-(id)nextToken;
-(void)reset;


@end


#endif