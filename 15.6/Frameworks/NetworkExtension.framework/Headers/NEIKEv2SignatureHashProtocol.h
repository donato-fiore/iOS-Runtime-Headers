// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2SIGNATUREHASHPROTOCOL_H
#define NEIKEV2SIGNATUREHASHPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>



@property (nonatomic) NSUInteger hashType; // ivar: _hashType


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHashType:(NSUInteger)arg0 ;


@end


#endif