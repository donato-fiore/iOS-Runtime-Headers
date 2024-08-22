// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDANALYTICSIDENTIFIER_H
#define MAPSSYNCMANAGEDANALYTICSIDENTIFIER_H

@class NSManagedObject, NSDate, NSData, NSUUID;



@interface MapsSyncManagedAnalyticsIdentifier : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif