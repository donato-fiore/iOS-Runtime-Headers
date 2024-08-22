// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFASN1TOKEN_H
#define ASFASN1TOKEN_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ASFAsn1Token : NSObject

@property (readonly) NSData *data; // ivar: mData
@property (readonly) NSUInteger identifier; // ivar: mIdentifier
@property (readonly) unsigned char tokenClass; // ivar: mClass


+(id)readTokenFromBuffer:(id)arg0 length:(*NSUInteger)arg1 ;
+(id)readTokenFromBuffer:(id)arg0 opaque:(BOOL)arg1 length:(*NSUInteger)arg2 ;
-(id)_initSuperWithID:(NSUInteger)arg0 class:(unsigned char)arg1 data:(id)arg2 opaque:(BOOL)arg3 ;
-(id)description;


@end


#endif