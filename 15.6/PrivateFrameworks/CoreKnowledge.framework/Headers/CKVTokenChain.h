// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVTOKENCHAIN_H
#define CKVTOKENCHAIN_H

@class NSLocale, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVTokenChain : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *normalizedString; // ivar: _normalizedString
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
+(id)tokenChainBuilderForString:(id)arg0 locale:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenChain:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 locale:(id)arg1 tokens:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif