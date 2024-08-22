// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDANONYMOUSCREDENTIAL_H
#define MAPSSYNCMANAGEDANONYMOUSCREDENTIAL_H

@class NSManagedObject, NSData, NSDate, NSUUID, NSSet;



@interface MapsSyncManagedAnonymousCredential : NSManagedObject

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) NSInteger mapsTokenTTL;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, retain) NSSet *reviewedPlaces;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif