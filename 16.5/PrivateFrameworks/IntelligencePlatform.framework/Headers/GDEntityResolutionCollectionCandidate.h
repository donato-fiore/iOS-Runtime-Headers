// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDENTITYRESOLUTIONCOLLECTIONCANDIDATE_H
#define GDENTITYRESOLUTIONCOLLECTIONCANDIDATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDEntityResolutionCollectionCandidate : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *aliasConcat; // ivar: _aliasConcat
@property (readonly, nonatomic) NSInteger callSixMonths; // ivar: _callSixMonths
@property (readonly, nonatomic) NSInteger callSixWeeks; // ivar: _callSixWeeks
@property (readonly, nonatomic) NSInteger callTwelveWeeks; // ivar: _callTwelveWeeks
@property (readonly, nonatomic) NSInteger callTwoWeeks; // ivar: _callTwoWeeks
@property (readonly, nonatomic) NSInteger firstPartyMsgSixMonths; // ivar: _firstPartyMsgSixMonths
@property (readonly, nonatomic) NSInteger firstPartyMsgSixWeeks; // ivar: _firstPartyMsgSixWeeks
@property (readonly, nonatomic) NSInteger firstPartyMsgThreeMonths; // ivar: _firstPartyMsgThreeMonths
@property (readonly, nonatomic) NSInteger firstPartyMsgTwoWeeks; // ivar: _firstPartyMsgTwoWeeks
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *personFromEvent; // ivar: _personFromEvent
@property (readonly, copy, nonatomic) NSString *personFromEventLocation; // ivar: _personFromEventLocation
@property (readonly, copy, nonatomic) NSString *personFromLocation; // ivar: _personFromLocation
@property (readonly, copy, nonatomic) NSString *personFromOrganization; // ivar: _personFromOrganization
@property (readonly, copy, nonatomic) NSString *personToPerson; // ivar: _personToPerson
@property (readonly, copy, nonatomic) NSString *primaryName; // ivar: _primaryName
@property (readonly, nonatomic) NSInteger thirdPartyMsgSixMonths; // ivar: _thirdPartyMsgSixMonths
@property (readonly, nonatomic) NSInteger thirdPartyMsgSixWeeks; // ivar: _thirdPartyMsgSixWeeks
@property (readonly, nonatomic) NSInteger thirdPartyMsgThreeMonths; // ivar: _thirdPartyMsgThreeMonths
@property (readonly, nonatomic) NSInteger thirdPartyMsgTwoWeeks; // ivar: _thirdPartyMsgTwoWeeks


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryName:(id)arg0 personToPerson:(id)arg1 aliasConcat:(id)arg2 personFromOrganization:(id)arg3 personFromLocation:(id)arg4 personFromEventLocation:(id)arg5 personFromEvent:(id)arg6 firstPartyMsgTwoWeeks:(NSInteger)arg7 firstPartyMsgSixWeeks:(NSInteger)arg8 firstPartyMsgThreeMonths:(NSInteger)arg9 firstPartyMsgSixMonths:(NSInteger)arg10 thirdPartyMsgTwoWeeks:(NSInteger)arg11 thirdPartyMsgSixWeeks:(NSInteger)arg12 thirdPartyMsgThreeMonths:(NSInteger)arg13 thirdPartyMsgSixMonths:(NSInteger)arg14 callTwoWeeks:(NSInteger)arg15 callSixWeeks:(NSInteger)arg16 callTwelveWeeks:(NSInteger)arg17 callSixMonths:(NSInteger)arg18 identifier:(id)arg19 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif