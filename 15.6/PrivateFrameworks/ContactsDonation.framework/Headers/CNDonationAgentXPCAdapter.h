// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDONATIONAGENTXPCADAPTER_H
#define CNDONATIONAGENTXPCADAPTER_H

@class NSString;
@protocol CNDonationAgentAdapter;

#import <Foundation/Foundation.h>


@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newXPCConnection;
+(void)changeFromAccount:(id)arg0 toAccount:(id)arg1 scope:(id)arg2 ;
+(void)donateMeCardValues:(id)arg0 scope:(id)arg1 ;
+(void)fetchDonatedMeCardWithScope:(id)arg0 ;
+(void)meCardDonationsWithScope:(id)arg0 ;
+(void)rejectValueWithDonationIdentifier:(id)arg0 scope:(id)arg1 ;
+(void)rejectValuesWithClusterIdentifier:(id)arg0 scope:(id)arg1 ;
+(void)removeAllRejectionsWithScope:(id)arg0 ;
+(void)removeDonatedMeCardValuesForIdentifiers:(id)arg0 scope:(id)arg1 ;
-(id)changeFromAccount:(id)arg0 toAccount:(id)arg1 ;
-(id)donateMeCardValues:(id)arg0 ;
-(id)donatedMeCardEither;
-(id)fetchDonatedMeCard;
-(id)meCardDonations;
-(id)rejectValueWithDonationIdentifier:(id)arg0 ;
-(id)rejectValuesWithClusterIdentifier:(id)arg0 ;
-(id)removeAllRejections;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg0 ;


@end


#endif