// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARUSAGEEVENT_H
#define PARUSAGEEVENT_H

@protocol NSFetchRequestResult;


#import "PAREvent.h"

@interface PARUsageEvent : PAREvent <NSFetchRequestResult>



@property (nonatomic) BOOL activeDays;
@property (nonatomic) int clientIntVal;
@property (nonatomic) BOOL invokedDays;
@property (nonatomic) int numSearchEngagements;
@property (nonatomic) BOOL searchedDays;
@property (nonatomic) BOOL suggestionOrAppleResultEngagedDays;
@property (nonatomic) BOOL voiceSearchDays;
@property (nonatomic) BOOL webEngagedDays;
@property (nonatomic) BOOL zkwEngagedDays;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif