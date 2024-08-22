// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSQUERYKEYTRANSPARENCYCONTEXT_H
#define IDSQUERYKEYTRANSPARENCYCONTEXT_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSUUID *ticket; // ivar: _ticket


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTicket:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif