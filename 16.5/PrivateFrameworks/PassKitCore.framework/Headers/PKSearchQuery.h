// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSEARCHQUERY_H
#define PKSEARCHQUERY_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSearchQuery : NSObject <NSSecureCoding>

 {
    NSUInteger _domain;
}


@property (readonly, nonatomic) NSUInteger domain;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_groupTokenOfType:(NSUInteger)arg0 ;
-(id)accountUserToken;
-(id)amountToken;
-(id)categoryToken;
-(id)dateToken;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 keyboardLanguage:(id)arg1 ;
-(id)locationTokens;
-(id)merchantToken;
-(id)peerPaymentSubTypeToken;
-(id)peerPaymentToken;
-(id)rewardsToken;
-(id)tags;
-(id)transactionSources;
-(id)transactionStatuses;
-(id)transactionTypes;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif