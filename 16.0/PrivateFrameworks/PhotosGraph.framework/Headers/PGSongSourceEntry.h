// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSONGSOURCEENTRY_H
#define PGSONGSOURCEENTRY_H

@class NSManagedObject, NSString, NSDate, NSSet;



@interface PGSongSourceEntry : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *dateLastUpdated;
@property (nonatomic, copy) NSString *geohash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSSet *songs;
@property (nonatomic, copy) NSString *version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif