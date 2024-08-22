// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCERTIFICATEINFO_H
#define MTRCERTIFICATEINFO_H

@class NSData, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRDistinguishedNameInfo.h"

@interface MTRCertificateInfo : NSObject <NSCopying>

 {
    NSData *_bytes;
    ChipCertificateData _data;
}


@property (readonly) MTRDistinguishedNameInfo *issuer;
@property (readonly) NSDate *notAfter;
@property (readonly) NSDate *notBefore;
@property (readonly) MTRDistinguishedNameInfo *subject;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTLVBytes:(id)arg0 ;


@end


#endif