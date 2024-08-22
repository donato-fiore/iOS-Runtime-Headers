// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFECKEYSPECIFIER_H
#define _SFECKEYSPECIFIER_H

@class SFAsymmetricKeySpecifier;



@interface _SFECKeySpecifier : SFAsymmetricKeySpecifier {
    id *_ecKeySpecifierInternal;
}


@property NSInteger curve;


+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurve:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif