// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDCOLLECTION_H
#define MAPSSYNCMANAGEDCOLLECTION_H

@class NSManagedObject, NSString, NSDate, NSUUID, NSData, NSSet;



@interface MapsSyncManagedCollection : NSManagedObject

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSSet *places;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif