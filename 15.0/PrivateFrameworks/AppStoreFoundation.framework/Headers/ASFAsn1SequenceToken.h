// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFASN1SEQUENCETOKEN_H
#define ASFASN1SEQUENCETOKEN_H



#import "ASFAsn1Token.h"

@interface ASFAsn1SequenceToken : ASFAsn1Token {
    char * mReadPointer;
}




-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)description;
-(id)nextToken;
-(void)reset;


@end


#endif