// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCACHERSTATUSENTRY_H
#define PGCACHERSTATUSENTRY_H

@class NSManagedObject, NSString, NSDate;



@interface PGCacherStatusEntry : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *lastFailedFetchedDate;
@property (nonatomic, copy) NSDate *lastSuccessfulFetchedDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif