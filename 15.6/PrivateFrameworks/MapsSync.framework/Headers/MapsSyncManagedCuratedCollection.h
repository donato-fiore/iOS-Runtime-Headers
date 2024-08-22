// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDCURATEDCOLLECTION_H
#define MAPSSYNCMANAGEDCURATEDCOLLECTION_H

@class NSManagedObject, NSDate, NSUUID;



@interface MapsSyncManagedCuratedCollection : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) NSInteger curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) int resultProviderIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif