// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARIMAGESPROPENSITY_H
#define PARIMAGESPROPENSITY_H

@class NSManagedObject, NSDate;
@protocol NSFetchRequestResult;



@interface PARImagesPropensity : NSManagedObject <NSFetchRequestResult>



@property (nonatomic) short image;
@property (nonatomic) short other;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short recentResult;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) short zkw;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif