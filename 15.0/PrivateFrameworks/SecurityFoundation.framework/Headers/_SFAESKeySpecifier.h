// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAESKEYSPECIFIER_H
#define _SFAESKEYSPECIFIER_H

@class SFSymmetricKeySpecifier;



@interface _SFAESKeySpecifier : SFSymmetricKeySpecifier {
    id *_aesKeySpecifierInternal;
}


@property (nonatomic) NSInteger bitSize;
@property (readonly, nonatomic) NSInteger blockSize;


+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(NSInteger)keyLengthInBytes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBitSize:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif