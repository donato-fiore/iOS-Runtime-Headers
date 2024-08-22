// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFINGERPRINTHASH_H
#define VNFINGERPRINTHASH_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNFingerprintHash : NSObject <NSCopying, NSSecureCoding>

 {
    NSData *_booleanBytesData_DO_NOT_DIRECTLY_ACCESS;
    NSData *_hashData_DO_NOT_DIRECTLY_ACCESS;
}


@property (readonly, copy) NSData *booleanBytesData;
@property (readonly, copy) NSData *hashData;
@property (readonly, copy) NSString *hashString;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBooleanBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBooleanBytesData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHashData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif