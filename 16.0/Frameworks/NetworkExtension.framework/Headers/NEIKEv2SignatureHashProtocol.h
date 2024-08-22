// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2SIGNATUREHASHPROTOCOL_H
#define NEIKEV2SIGNATUREHASHPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>

 {
    NSUInteger _hashType;
}


@property (readonly, nonatomic) NSUInteger hashType;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHashType:(NSUInteger)arg0 ;


@end


#endif