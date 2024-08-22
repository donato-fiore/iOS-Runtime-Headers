// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFRSAKEYSPECIFIER_H
#define _SFRSAKEYSPECIFIER_H

@class SFAsymmetricKeySpecifier;



@interface _SFRSAKeySpecifier : SFAsymmetricKeySpecifier {
    id *_rsaKeySpecifierInternal;
}


@property (nonatomic) NSInteger bitSize;


+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)initWithBitSize:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif