// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONPUBLICKEYCREDENTIALPARAMETERS_H
#define ASAUTHORIZATIONPUBLICKEYCREDENTIALPARAMETERS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASAuthorizationPublicKeyCredentialParameters : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger algorithm; // ivar: _algorithm


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAlgorithm:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif