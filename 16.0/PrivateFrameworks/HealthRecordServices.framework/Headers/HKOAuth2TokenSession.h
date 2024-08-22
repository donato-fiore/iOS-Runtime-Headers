// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOAUTH2TOKENSESSION_H
#define HKOAUTH2TOKENSESSION_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *code; // ivar: _code
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, copy, nonatomic) NSString *requestedScope; // ivar: _requestedScope
@property (readonly, copy, nonatomic) NSUUID *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCode:(id)arg0 query:(id)arg1 requestedScope:(id)arg2 state:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif