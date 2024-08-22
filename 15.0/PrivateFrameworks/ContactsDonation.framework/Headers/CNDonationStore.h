// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDONATIONSTORE_H
#define CNDONATIONSTORE_H

@protocol CNDonationAgentAdapter;

#import <Foundation/Foundation.h>


@interface CNDonationStore : NSObject

@property (readonly, nonatomic) NSObject<CNDonationAgentAdapter> *adapter; // ivar: _adapter


-(id)changeFromAccount:(id)arg0 toAccount:(id)arg1 ;
-(id)donatedMeCard;
-(id)donatedMeCardEither;
-(id)init;
-(id)initWithAdapter:(id)arg0 ;
-(id)meCardDonations;
-(void)donateMeCardValues:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDonatedMeCard:(id)arg0 ;
-(void)rejectValueWithDonationIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)rejectValuesWithClusterIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllRejectionsWithCompletionHandler:(id)arg0 ;
-(void)removeDonatedMeCardValuesForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif