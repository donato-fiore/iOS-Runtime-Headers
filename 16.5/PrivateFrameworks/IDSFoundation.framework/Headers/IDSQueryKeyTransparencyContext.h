// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQUERYKEYTRANSPARENCYCONTEXT_H
#define IDSQUERYKEYTRANSPARENCYCONTEXT_H

@class NSData, NSDate, NSUUID, KTVerifierResult;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *accountKey; // ivar: _accountKey
@property (readonly, nonatomic) NSDate *queryResponseTime; // ivar: _queryResponseTime
@property (readonly, nonatomic) NSUUID *ticket; // ivar: _ticket
@property (readonly, nonatomic) KTVerifierResult *verifierResult; // ivar: _verifierResult


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVerifierResult:(id)arg0 ticket:(id)arg1 accountKey:(id)arg2 queryResponseTime:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif