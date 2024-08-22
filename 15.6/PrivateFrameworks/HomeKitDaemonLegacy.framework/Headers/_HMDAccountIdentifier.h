// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMDACCOUNTIDENTIFIER_H
#define _HMDACCOUNTIDENTIFIER_H

@class HMFObject, NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;



@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *senderCorrelationIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif