// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2ENCRYPTIONPROTOCOL_H
#define NEIKEV2ENCRYPTIONPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying>

 {
    BOOL _is256Bit;
    NSUInteger _wireType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEncryptionType:(NSUInteger)arg0 ;


@end


#endif