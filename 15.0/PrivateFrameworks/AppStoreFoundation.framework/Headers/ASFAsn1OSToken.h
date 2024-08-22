// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFASN1OSTOKEN_H
#define ASFASN1OSTOKEN_H



#import "ASFAsn1Token.h"

@interface ASFAsn1OSToken : ASFAsn1Token

@property (readonly) ASFAsn1Token *value; // ivar: mValue


-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)stringValue;


@end


#endif