// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSYNCMANAGEDHISTORYITEM_H
#define MAPSSYNCMANAGEDHISTORYITEM_H

@class NSManagedObject, NSDate, NSUUID;



@interface MapsSyncManagedHistoryItem : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) CGFloat position;
@property (nonatomic) NSInteger positionIndex;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif