// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCHECKSUM_H
#define PFCHECKSUM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PFChecksum : NSObject <NSCopying>

 {
    PFChecksumBytes _bytes;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBytes:(struct PFChecksumBytes )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBytes:(struct PFChecksumBytes )arg0 ;
-(id)initWithChecksumAsData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)string;
-(struct PFChecksumBytes )checksumBytes;


@end


#endif