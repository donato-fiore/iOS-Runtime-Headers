// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARSESSIONENGAGEMENTSBYTRIGGER_H
#define PARSESSIONENGAGEMENTSBYTRIGGER_H

@class NSManagedObject, NSDate;
@protocol NSFetchRequestResult;



@interface PARSessionEngagementsByTrigger : NSManagedObject <NSFetchRequestResult>



@property (nonatomic) short client;
@property (nonatomic) short go;
@property (nonatomic) BOOL isSuggestion;
@property (nonatomic) BOOL isTopHit;
@property (nonatomic) short tap;
@property (nonatomic, copy) NSDate *timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif