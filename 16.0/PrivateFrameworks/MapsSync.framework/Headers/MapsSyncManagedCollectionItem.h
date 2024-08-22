// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDCOLLECTIONITEM_H
#define MAPSSYNCMANAGEDCOLLECTIONITEM_H

@class NSManagedObject, NSSet, NSDate, NSUUID;



@interface MapsSyncManagedCollectionItem : NSManagedObject

@property (nonatomic, retain) NSSet *collections;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif