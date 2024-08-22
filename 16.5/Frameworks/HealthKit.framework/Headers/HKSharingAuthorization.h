// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHARINGAUTHORIZATION_H
#define HKSHARINGAUTHORIZATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSharingAuthorization : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *authorizationIdentifier; // ivar: _authorizationIdentifier
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *displaySubtitle; // ivar: _displaySubtitle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAuthorizationIdentifier:(id)arg0 ;
-(id)initWithAuthorizationIdentifier:(id)arg0 displayName:(id)arg1 displaySubtitle:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif