// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASN1TOKEN_H
#define ASN1TOKEN_H


#import <Foundation/Foundation.h>


@interface asn1Token : NSObject

@property (readonly) char * content; // ivar: mContent
@property (readonly) NSUInteger identifier; // ivar: mIdentifier
@property (readonly) NSUInteger length; // ivar: mLength
@property (readonly) unsigned char tokenClass; // ivar: mClass


+(id)readOpaqueTokenFromBuffer:(char *)arg0 ;
+(id)readTokenFromBuffer:(char *)arg0 ;
+(id)readTokenFromBuffer:(char *)arg0 opaque:(BOOL)arg1 ;
-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)description;


@end


#endif