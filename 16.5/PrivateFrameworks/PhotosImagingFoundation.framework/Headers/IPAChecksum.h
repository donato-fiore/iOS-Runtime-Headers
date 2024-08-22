// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPACHECKSUM_H
#define IPACHECKSUM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IPAChecksum : NSObject <NSCopying>

 {
    IPAChecksumBytes _bytes;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBytes:(struct IPAChecksumBytes )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBytes:(struct IPAChecksumBytes )arg0 ;
-(id)initWithChecksumAsData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)string;
-(struct IPAChecksumBytes )checksumBytes;


@end


#endif