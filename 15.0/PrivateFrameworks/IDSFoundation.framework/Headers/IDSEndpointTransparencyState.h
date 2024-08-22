// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSENDPOINTTRANSPARENCYSTATE_H
#define IDSENDPOINTTRANSPARENCYSTATE_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (readonly, nonatomic) NSInteger verificationState; // ivar: _verificationState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpointTransparencyState:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPushToken:(id)arg0 verificationState:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif